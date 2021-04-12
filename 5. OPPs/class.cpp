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
};


int main(){
    // Creating class object
    YouTubeChannel ytchannel;
    ytchannel.Name = "Tech with Tim";
    ytchannel.Ownername = "Tim";
    ytchannel.SubscribersCount = 500000;
    ytchannel.VideoTitles = {"C++ Tutorials", "Python Basic", "Machine Learning"};

    // printing all the properties
    cout << "Name: " << ytchannel.Name << endl;
    cout << "Ownername: " << ytchannel.Ownername << endl;
    cout << "Subscribers Count: " << ytchannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    // printing list using for each loop
    for(string videos : ytchannel.VideoTitles){
        cout << videos << endl;
    }

    return 0;


}
