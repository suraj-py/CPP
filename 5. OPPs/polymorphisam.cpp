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
    int progressCount;

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

    void CheckAnalytics(){
        if(progressCount > 5){
            cout << Ownername << " is doing great." << endl;
        }
        else{
            cout << Ownername << " must improve." << endl;
        }
    }

};

//Creating child class
class CookingYouTubeChannel : public YouTubeChannel{
public:
    // constructor of child class
    CookingYouTubeChannel(string name, string owner) : YouTubeChannel(name, owner){

    }

    void Practice(){
        cout << Ownername << " is practicing cooking.";
    }
};

class SingerYouTubeChannel : public YouTubeChannel{
public:
    // constructor of child class
    SingerYouTubeChannel(string name, string owner) : YouTubeChannel(name, owner){

    }

    void Practice(){
        cout << Ownername << " is practicing singing." << endl;
        progressCount++;
    }
};




int main(){
    // Creating constructor object
    CookingYouTubeChannel yt1("CookingShooking", "Alex");
    SingerYouTubeChannel yt2("Harry Styles", "Harry");

    yt1.GetInfo();
    yt2.GetInfo();
    yt1.Practice();
    yt2.Practice();
    yt2.Practice();
    yt2.Practice();
    yt2.Practice();
    yt2.Practice();
    yt2.Practice();

    // accessing method using pointers
    // invoking pointer
    YouTubeChannel* cyt = &yt1;
    YouTubeChannel* syt = &yt2;

    cyt->CheckAnalytics();
    syt->CheckAnalytics();

    return 0;


}
