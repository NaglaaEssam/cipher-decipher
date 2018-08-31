#include <iostream>

using namespace std;

int main()
{
    cout<<"Ahlan Ya User Ya Habibi"<<endl;
    cout<<"what do you want to do today"<<endl;
    cout<<"1-cipher a message"<<endl;
    cout<<"2-decipher a message"<<endl;
    cout<<"3-end"<<endl;
    string newword="";
    string n_word="";
    int num;
    cout<<"enter a num :";
    cin>>num;
    if(num==1){
            cout<<"please enter the massage to cipher:";
            string word;
            cin.ignore();
            getline(cin,word);
             for(int i=0;i<word.length();i++){
                   if((int(word[i])>=65&&int(word[i])<=77)||(int(word[i])>=97&&int(word[i])<=109)){
                         newword+=char(int(word[i])+13);
                     }
                     else if(int(word[i]==32)){
                             newword+=char(32);

                     }
                    else
                      newword+=char(int(word[i])-13);
               }
              cout<<"the cipher massage is :"<<newword<<endl;
    }
    else if(num==2){
              cout<<"please enter the massage to decipher:";
              string word;
              cin.ignore();
              getline(cin,word);
             for(int i=0;i<word.length();i++){
                   if((int(word[i])>=65&&int(word[i])<=77)||(int(word[i])>=97&&int(word[i])<=109)){
                         newword+=char(int(word[i])+13);
                     }
                     else if(int(word[i]==32)){
                             newword+=char(32);
                     }
                    else
                      newword+=char(int(word[i])-13);
               }
              cout<<newword<<endl;

             for(int j=0;j<newword.length();j++){
                    if((int(newword[j])>=78&&int(newword[j])<=90)||(int(newword[j])>=110&&int(newword[j])<=122)){
                         n_word+=char(int(newword[j])-13);
                    }
                     else if(int(newword[j]==32)){
                             n_word+=char(32);
                     }
                    else

                     n_word+=char(int(newword[j])+13);
      }
      cout<<"the decipher massage is :"<< n_word<<endl;
    }
    else
        cout<<"end the program"<<endl;

    return 0;
}
