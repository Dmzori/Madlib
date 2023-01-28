#include <iostream>
using namespace std;

int main()
    {
        //I need 16 strings
        string adj1, noun1, noun2, verb1, type_Of_Liquid1,
               type_Of_Liquid2, type_Of_Liquid3, color1,
               verb2, verb3, number1, adj2, adverb1,
               part_Of_The_Body_Plural, verb4, verb5;


        cout<<"Pick an adjective.";
        cin>> adj1;
        cout<<"Pick a noun.";
        cin>>noun1;
        cout<<"Choose a different noun.";
        cin>>noun2;
        cout<<"Now pick a verb.";
        cin>>verb1;
        cout<<"Give me a type of liquid.";
        cin>>type_Of_Liquid1;
        cout<<"And another one.";
        cin>>type_Of_Liquid2;
        cout<<"Just one more type of liquid.";
        cin>>type_Of_Liquid3;
        cout<<"Alright done with those now give me a color.";
        cin>>color1;
        cout<<"Ok that's good but now I need another verb";
        cin>>verb2;
        cout<<"Need another verb here";
        cin>>verb3;
        cout<<"That's enough verbs for now, we'll come back for more later. Give me a number.";
        cin>>number1;
        cout<<"Alright can I get an adjective?";
        cin>>adj2;
        cout<<"One adverb please.";
        cin>>adverb1;
        cout<<"This is a strange one but can I have a plural part of the body";
        cin>>part_Of_The_Body_Plural;
        cout<<"Back in verb country lets wrap this up, give me a verb!";
        cin>>verb4;
        cout<<"Last one, one more verb for the road.";
        cin>>verb5;

        cout<<"Here's what we got.\n";
        cout<<"To make "<<adj1<<" ice cubes, first find a tray with a mold shaped like a/n "<<noun1<<" or an "<<noun2<<".\n";
        cout<<" Then "<<verb1<<" once while holding the tray. Fill the molds with "<<type_Of_Liquid1<<" or even "<<type_Of_Liquid2<<"\n"
        cout<<"(but for best results, always use "<<type_Of_Liquid3<<". It can even be dyed "<<color1<<" if you wish.\n"
    }
