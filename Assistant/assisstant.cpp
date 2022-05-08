#include<bits/stdc++.h>
using namespace std;
void wishme()
{
    time_t now = time(0);
    tm *time = localtime(&now);

    if(time-> tm_hour < 12)
    {
        cout<<"good moring sir"<<endl;
        string phrase = "good moring sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand); 
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout<<" good afternoon sir"<<endl;
        string phrase = " good afternoon sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24)
    {
        cout<<"good evening sir"<<endl;
        string phrase = "good evening sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"the date and time is"<<endl<<dt<<endl;
}
int main()
{
    system("cls");
    cout<<"welcome"<<endl;

    char password[20];
    char ch[100];

    do
    {
        cout<<"Enter your password"<<endl;
        string phrase = "enter your password";
        string command = "espeak \"" + phrase + "\"";
        const char *charcommand = command.c_str();
        system(charcommand);

        gets(password);

        if(strcmp(password, "good")==0){
            wishme();
            do{
                cout<<endl<<"how can i help you sir..."<<endl<<endl;

                string phrase = "how can i help you sir";
                string command = "espeak \"" + phrase + "\"";
                const char *charcommand = command.c_str();
                system(charcommand);

                cout<<"your query ===> ";
                gets(ch);
                cout<<endl;
                cout<<"here is the result for query ===> ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 ){
                    cout<<"hello sir"<<endl;
                    string phase = "hello sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand); 
                }

                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 ){
                    cout<<"good bye bro have a nice day"<<endl;
                    string phrase = "good bye bro have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    exit(0);
                }

                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0){
                     cout<<"i am a virtual assistant created by my bros Aryan,Deepak,Chirag"<<endl;
                     string phrase = "i am a virtual assistant created by my bros Aryan,Deepak,Chirag";
                     string command = "espeak \"" + phrase + "\"";
                     const char *charcommand = command.c_str();
                     system(charcommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "about") == 0){
                    cout<<"i am good bro , tell me how can i help you"<<endl;
                    string phrase = "i am good bro, tell me how can i help you";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0){
                    datetime();
                }

                else if(strcmp(ch, "open google") == 0){
                    cout<<"opening google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"opening youtube"<<endl;
                    string phrase ="opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    system("start https://www.youtube.com" );
                }

                else if(strcmp(ch,"open instagram") == 0){
                    cout<<"opening instagram"<<endl;
                    string phrase = "opening instagram";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    system("start https://www.instagram.com");
                }

                else if(strcmp(ch, "open twitter") == 0){
                    cout<<"opening twitter"<<endl;
                    string phrase = "opening twitter";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    system("start https://www.twitter.com");
                }

                else if(strcmp(ch, "open google class room") == 0){
                    cout<<"opening google class room"<<endl;
                    string phrase = "opening google class room";
                    string command ="espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    system("start https://classroom.google.com/u/1/h");
                }

                else if(strcmp(ch, "open codechef") == 0){
                    cout<<"opening codechef"<<endl;
                    string phrase = "opening codechef";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    system("start https://www.codechef.com/problems/school/");
                }

                else if(strcmp(ch, "open hakerearth") == 0){
                    cout<<"opening hackerearth"<<endl;
                    string phrase = "opening hackerearth";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                    system("start https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/");
                }

                else{
                    cout<<"sorry could not uderstand please try again"<<endl;
                    string phrase = "sorry could not understand please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charcommand = command.c_str();
                    system(charcommand);
                } 
                
            }while(1);
        }
    }while(0);

    return 0;
    
}