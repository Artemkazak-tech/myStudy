// 10.x.6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
#include <algorithm>
#include <random>
#include <ctime>

enum class Rank
{
    two,
    three,
    four,
    five,
    six,
    seven,
    eigth,
    nine,
    ten,
    jack,
    queen,
    king,
    ace,
    max_rank
};

enum class Suit
{
    clubs,
    diamonds,
    hearts,
    spades,
    max_suit
};

struct Card
{
    Rank rank;
    Suit suit;
};

void printCard(const Card& card)
{
    switch (card.rank)
    {
        case Rank::two: std::cout << '2'; break;
        case Rank::three: std::cout << '3'; break;
        case Rank::four: std::cout << '4'; break;
        case Rank::five: std::cout << '5'; break;
        case Rank::six: std::cout << '6'; break;
        case Rank::seven: std::cout << '7'; break;
        case Rank::eigth: std::cout << '8'; break;
        case Rank::nine: std::cout << '9'; break;
        case Rank::ten: std::cout << 'T'; break;
        case Rank::jack: std::cout << 'J'; break;
        case Rank::queen: std::cout << 'Q'; break;
        case Rank::king: std::cout << 'K'; break;
        case Rank::ace: std::cout << 'A'; break;
        default:
                std::cout << '?';
                break;
    }
    switch (card.suit)
    {
        case Suit::clubs: std::cout << 'C'; break;
        case Suit::diamonds: std::cout << 'D'; break;
        case Suit::hearts: std::cout << 'H'; break;
        case Suit::spades: std::cout << 'S'; break;
        default:
            std::cout << '?';
            break;
    }
}

using deck_type = std::array <Card, 52>;
using index_type = deck_type::size_type;

deck_type createDeck()
{
    deck_type deck{};

    index_type number{ 0 };

    auto suits{ static_cast<int>(Suit::max_suit) };
    auto ranks{ static_cast<int>(Rank::max_rank) };

    for (int i{}; i < suits; ++i)
    {
        for (int z{}; z < ranks; ++z)
        {
            deck[number].rank = static_cast<Rank>(z);
            deck[number].suit = static_cast<Suit>(i);
            ++number;

        }
    }
    return deck;
}

void printDeck(const deck_type& deck)
{
    for (const auto&i : deck)
    {
        printCard(i);
        std::cout << ' ';
    }
    std::cout << '\n';
}

void shuffleDeck( deck_type& deck)
{
    std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
    std::shuffle(deck.begin(), deck.end(), mt);
}

int getCardValue(const Card& card)
{
    if (card.rank < Rank::ten)
    {
        return (static_cast<int>(card.rank) + 2);
    }


    switch (card.rank)
    {
            case Rank::ten:
            case Rank::jack:
            case Rank::queen:
            case Rank::king:
                return 10;
            case Rank::ace:
                return 11;
            default:
                return '0';
    }
}


int main()
{
    auto deck{ createDeck() };
    
    shuffleDeck(deck);
    printDeck(deck);
    

    return 0;
}
