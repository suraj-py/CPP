#include <iostream>
#include <list>
using namespace std;

// Creating Parent class
class YouTubeChannel{
// Private access modifier
private:
    // Defining class attributes
    string Name;
    int SubscribersCount;
    list<string> VideoTitles;

// Protected access modifier
protected:
    string Ownername;

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
        cout << "-----------------------------------------" << endl;
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

//Creating child class
class KidsYouTube : public YouTubeChannel{
public:
    // constructor of child class
    KidsYouTube(string name, string owner) : YouTubeChannel(name, owner){

    }

    void Intro(){
        cout << "Hello everyone. I'm " << Ownername << endl; // accessing this value using protected access modifier
        cout << "This is my YouTube Channel" << endl;
    }
};




int main(){
    // Creating constructor object
    KidsYouTube kidytchannel("1234Go", "Alex");
    KidsYouTube kidytchannel1("Doremon", "Nobita");

    kidytchannel.Subscribe();
    kidytchannel.Subscribe();
    kidytchannel.PublishVideo("How to make paper craft.");
    kidytchannel.Intro();
    kidytchannel.GetInfo();

    kidytchannel1.Intro();
    kidytchannel1.GetInfo();

    return 0;


}
