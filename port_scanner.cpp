#include <SFML/Network.hpp>
#include <iostream>
//g++ -c port_scanner.cpp  
//-o sfml-app -lsfml-network -lsfml-window -lsfml-system
using namespace std;

bool is_open(string address,int i)
{
    sf::TcpSocket socket;
    if(socket.connect(address,i)==sf::Socket::Done)
    {
        return true;
    }return false;
}

int main()
{
    string address;
    int fport,sport;
    cout << "Address: ";
    cin >> address;
    cout << "Initial Port: ";
    cin >> fport;
    cout << "Final Port: ";
    cin >> sport;
    for(int i = fport; i<=sport; i++){
        if(is_open(address,i))
        {

            cout << "Port " << i << " is open" << "\n";
        }else cout << "Port " << i << " is closed" << "\n";
    }
    return 0;
}
