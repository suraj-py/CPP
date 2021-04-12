#include <iostream>
#include <list>
using namespace std;

// Creating class
class YouTubeChannel{
// Private access modifier
private:
    // Defining class attributes
    string Name;
    string Ownername;
    int SubscribersCount;
    list<string> VideoTitles;

// Public access modifier
public:
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

    void Subscribe(){
        SubscribersCount++;
    }

    void Unsubscribe(){
        if(SubscribersCount > 0)
            SubscribersCount--;
    }

    void PublishVideo(string title){
        VideoTitles.push_back(title);
    }

};


int main(){
    // Creating constructor object
    YouTubeChannel ytchannel("Tech with Tim", "Tim");
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Unsubscribe();
    ytchannel.PublishVideo("ML Tutorials");
    ytchannel.PublishVideo("C++ Tutorials");
    ytchannel.GetInfo();

    return 0;


}
