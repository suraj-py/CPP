#include <iostream>
#include <list>
using namespace std;

// Creating class
class YouTubeChannel{
// Public access modifier
public:
    // Defining class attributes
    string Name;
    string Ownername;
    int SubscribersCount;
    list<string> VideoTitles;

    // Defining constructor
    YouTubeChannel(string name, string owner){
        Name = name;
        Ownername = owner;
        SubscribersCount = 0;
    };

    // Creating class method to print info
    void GetInfo(){
        // printing all the properties
        cout << "Name: " << Name << endl;
        cout << "Ownername: " << Ownername << endl;
        cout << "Subscribers Count: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        // printing list using for each loop
        for(string videos : VideoTitles){
            cout << videos << endl;
        }
    }

};


int main(){
    // Creating constructor object
    YouTubeChannel ytchannel("Tech with Tim", "Tim");
    ytchannel.SubscribersCount = 500000;
    ytchannel.VideoTitles = {"C++ Tutorials", "Python Basic", "Machine Learning"};
    ytchannel.GetInfo();

    YouTubeChannel ytchannel1("Neo Codes", "Neo");
    ytchannel1.GetInfo();

    return 0;


}
