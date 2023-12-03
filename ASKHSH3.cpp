#include <iostream>
using namespace std;
#include <vector>



 


int countparan(string s) //metritis parenthesewn pu anigun 
{

    int count=0;
    for (int i = 0; i != s.size(); i++)
            
        if (s[i] == '(') 
            count++;
            return count;
}            
        


int countparklin(string s ) //metritis parenthesewn pu klinun 
{
    int count=0;
    for (int i = 0; i != s.size(); i++)
            
        if (s[i] == ')') 
            count++;
            
        return count;
}

int countaster(string s ) //metritis * 
{
    int count=0;
    for (int i = 0; i != s.size(); i++) 
            
        if (s[i] == '*') 
            count++;
            
        return count;

}

int countminus(string s )//metritis -
{
    int count=0;
    for (int i = 0; i != s.size(); i++)
            
        if (s[i] == '-') 
            count++;
            
        return count;
}

int countplus(string s )//metritis +
{
    int count=0;
    for (int i = 0; i != s.size(); i++)
            
        if (s[i] == '+') 
            count++;
            
        return count;
}

int counta(string s )//metritis a
{   
    int count=0;
    for (int i = 0; i != s.size(); i++)
            
        if (s[i] == 'a') 
            count++;
            
        return count;

}

int countb(string s )//metritis b 
{

    int count=0;
    for (int i = 0; i != s.size(); i++)
            
        if (s[i] == 'b') 
            count++;
            
        return count;
}

void automata(vector <int> b,string s) //vasiki synartisi programmatos 
{
   
    vector < int > soros;
    

    
    for( int i=0; i!=s.size();)
    {
        


        if(i==0 && soros.size()==0)//ekxorisi sto stack ta arxika symvola 
        {
            
           

            soros.push_back(0);
            soros.push_back(1);
               
           
             
            
               
        }
        if(soros[soros.size()-1]==5||soros[soros.size()-1]==6||soros[soros.size()-1]==7||soros[soros.size()-1]==8||soros[soros.size()-1]==9||soros[soros.size()-1]==13||soros[soros.size()-1]==14)//elegxos gia termatiko sto stack 
        {   
            cout<<" final symbol in the stack \n";
            if(b.at(i)==soros[soros.size()-1]) // an to stack exei idio termatiko simvolo me to stack pu adistixi sta symvola tis symvoloseiras 
            {
                                                // tote ginontai oi aparetitoi elegxoi me vasi thn diadikasia pop back sto stack 
                cout<<" stack symbol and string symbol are equal\n";
                if(soros[soros.size()-1]==5 ) 
                {
                    
                    cout<<"current string symbol is (, which is equall to the last symbol in the stack which is also ( \n";
                    cout<<"action to be taken is : removing last stack symbol and moving to the next string symobol \n";
                    soros.pop_back();
                    
                    
                    
                    i++;
                    
                }
                if(soros[soros.size()-1]==6)
                {
                    
                    cout<<"current string symbol is ), which is equall to the last symbol in the stack which is also ) \n";
                    cout<<"action to be taken is : removing last stack symbol and moving to the next string symobol \n";
                    soros.pop_back();
                    
                    i++;
                   
                
                }
                if(soros[soros.size()-1]==7)
                {
                    
                    cout<<"current string symbol is *, which is equall to the last symbol in the stack which is also * \n";
                    cout<<"action to be taken is : removing last stack symbol and moving to the next string symobol \n";
                    soros.pop_back();
                    
                    i++;
                  
                }
                if(soros[soros.size()-1]==8)
                {
                  
                    cout<<"current string symbol is -, which is equall to the last symbol in the stack which is also - \n";
                    cout<<"action to be taken is : removing last stack symbol and moving to the next string symobol \n";
                    soros.pop_back();
                   
                    i++;
                   
                }
                if(soros[soros.size()-1]==9)
                {
                    
                    cout<<"current string symbol is + , which is equall to the last symbol in the stack which is also + \n";
                    cout<<"action to be taken is : removing last stack symbol and moving to the next string symobol \n";
                    soros.pop_back();
                    
                    i++;
                   

                }
                if(soros[soros.size()-1]==13)
                {
                    
                    cout<<"current string symbol is a, which is equall to the last symbol in the stack which is also a \n";
                    cout<<"action to be taken is : removing last stack symbol and moving to the next string symobol \n";
                    soros.pop_back();
                    
                    i++;
                    
                }
                if(soros[soros.size()-1]==14)
                {
                    
                    cout<<"current string symbol is b, which is equall to the last symbol in the stack which is also b \n";
                    cout<<"action to be taken is : removing last stack symbol and moving to the next string symobol \n";
                    soros.pop_back();
                    
                    i++;
                    
                }
            
      

                
               
               
            }
            continue;

        }
        if(soros[soros.size()-1]==0 && b.at(i)==0) // elegxos telus 
        {
           
            cout<<"the string has been analyzed and it looks like  the stack ended with the $ symbol , and also the inputed string  ended with the $ symbol meaning that the inputed string is recognised by this grammar \n";
            break;
        }

        if(soros[soros.size()-1]==1||soros[soros.size()-1]==2||soros[soros.size()-1]==3||soros[soros.size()-1]==4) //elegxos gia mh teliko symvolo sto stack kai analoga me to stack termatikon symvolon(=string) pernw thn analogi paragogh
                                                                                                                    // kai kano pop to telefteo symnvolo stack kai adikatastasi me thn paragogh tou alla anapoda 
        {
            cout<<" stack contains a non terminal symbol \n";
            
            
            if(soros[soros.size()-1]==1 && b.at(i)==5)
            {
                soros.pop_back();
                soros.push_back(6);
                soros.push_back(2);
                soros.push_back(5);
                cout<<"stack symbol was S , string symbol was (, adding in the stack in this order the symbols ) , X, ( \n";
                cout<<"production made is S->(X) \n";
                
                
                continue;
            }
            if(soros[soros.size()-1]==2 && b.at(i)==5)
            {
                soros.pop_back();
                soros.push_back(4);
                soros.push_back(3);
                cout<<"stack symbol was X string symbol was (, adding in the stack in this order the symbols Z,Y \n";
                cout<<"production made is X->YZ \n ";
                continue;
                
            }
            if(soros[soros.size()-1]==2 && b.at(i)==13)
            {
                soros.pop_back();
                soros.push_back(4);
                soros.push_back(3);
                cout<<"stack symbol was X string symbol was a, adding in the stack in this order the symbols Z,Y \n";
                cout<<"production made is X->YZ \n ";
                continue;
            }
            if(soros[soros.size()-1]==2&&b.at(i)==14 )
            {
                soros.pop_back();
                soros.push_back(4);
                soros.push_back(3);
                cout<<"stack symbol was X string symbol was b, adding in the stack in this order the symbols Z,Y \n";
                cout<<"production made is X->YZ \n ";
                continue;

            }
            if(soros[soros.size()-1]==3 && b.at(i)==5)
            {
                soros.pop_back();
                soros.push_back(1);
                cout<<"stack symbol was Y string symbol was (, adding in the stack in this order the symbol S \n";
                cout<<"production made was Y->S \n";
                continue;
                
            }
            if(soros[soros.size()-1]==3 && b.at(i)==13)
            {
                soros.pop_back();
               soros.push_back(13);
               cout<<"stack symbol was Y string symbol was a, adding in the stack in this order the symbol a\n";
               cout<<"production made was Y->a \n ";
               continue;
            }
            if(soros[soros.size()-1]==3 && b.at(i)==14)
            {
                soros.pop_back();

                soros.push_back(14);
                cout<<"stack symbol was Y string symbol was b, adding in the stack in this order the symbols b \n";
                cout<<"production made was Y->b \n ";
                continue;
            }
            
            if(soros[soros.size()-1]==4 && b.at(i)==6)
            {
                soros.pop_back();
               cout<<"stack symbol was Z, string symbol was ) \n";
               cout<<"production made was Z -> e (empty) so no symbols are to be added to the stack, Z symbols is removed \n";
               continue;

            }
            if(soros[soros.size()-1]==4 && b.at(i)==7)
            {
                soros.pop_back();
                soros.push_back(2);
                soros.push_back(7);
                cout<<"stack symbol was Z , string symbol was * , adding in the stack in this order X , * \n ";
                cout<<"production made was Z -> *X \n";
                continue;
            }
            if(soros[soros.size()-1]==4 && b.at(i)==8)
            {
                soros.pop_back();
                soros.push_back(2);
                soros.push_back(8);
                cout<<"stack symbol was Z , string symbol was - , adding in the stack in this order X , - \n ";
                cout<<"production made was Z -> -X \n";
                continue;
            }
            if(soros[soros.size()-1]==4 && b.at(i)==9)
            {
                soros.pop_back();
                soros.push_back(2);
                soros.push_back(9);
                cout<<"stack symbol was Z , string symbol was + , adding in the stack in this order X , + \n ";
                cout<<"production made was Z -> +X \n";
                continue;
            }

            else//elegxos gia simvoloseira mh an agnorisimi 
            {

                cout<<"it seems that the string you have inputed was not recognised by the analyzer because there was an M(x,a) that was not present in the syntax table  \n";
                cout<<"thank you for using our analyzer \n";
                break;
            }

            
        }

    
    }        
}





int main()
{   
    int parenthanigi ;
    int parenthklini;
    int asteriskos;
    int minus;
    int plus;
    int a;
    int bb;

    string mystring12;
    

    mystring12="((b-a)*(a+b))$"; //paradigma simvoloseiras 
    string mystring123="((b-a)*(a+b))";
    cout << "this is the example string " << mystring123<<"\n";
 
    vector < int > symbo12;// metatropi symvoloseiras se kodikopoihmeno vector (stack ) termatikon symvolon 
    for(int i=0; i!=mystring12.size(); (i++))//metatrepo ta simvola ths simvoloseiras se arithmus pou vazw sto vector symbo12 oste na xrhsimopoihthoun meta sthn synarthsh symbo 
    {       
        if(mystring12.at(i)=='(')// ( =5
        {
            symbo12.push_back(5);
        }
        if(mystring12.at(i)==')')// ) =6
        {
            symbo12.push_back(6);
        }
        if(mystring12.at(i)=='*') // * = 7
        {
            symbo12.push_back(7);
        }
        if(mystring12.at(i)=='-')// - = 8
        {
            symbo12.push_back(8);
        }
        if(mystring12.at(i)=='+')// + = 9
        {
            symbo12.push_back(9);
        }
        if(mystring12.at(i)=='a') // a = 13
        {
            symbo12.push_back(13);
        }
        if(mystring12.at(i)=='b')// b= 14
        {
            symbo12.push_back(14); 
        }
        if(mystring12.at(i)=='$') //$ = 0 
        {
            symbo12.push_back(0);
        }
    }
    cout<< " initiating string analysis\n";
       
    automata(symbo12,mystring12);
    
    cout<<"this was the example string being analyzed we will continue by asking you to input your own string \n ";

















    string mystring1;
    string mystring;
    cout << "Enter the string you wish to analyze \n";
    cin >> mystring ;
    mystring1=mystring + "$";
    cout << "this is your string " << mystring <<"\n";

    parenthanigi = countparan(mystring1); // metraw thn posothta kathe symvolou stin simvoloseira kai elegxo sthn main 
    parenthklini = countparklin(mystring1);
    asteriskos = countaster(mystring1);
    minus = countminus(mystring1);
    plus = countplus(mystring1);
    a = counta(mystring1);
    bb = countb(mystring1);
    vector < int > symbo;
    for(int i=0; i!=mystring1.size(); (i++))//vazo 
    {       
        if(mystring1.at(i)=='(')
        {
            symbo.push_back(5);
        }
        if(mystring1.at(i)==')')
        {
            symbo.push_back(6);
        }
        if(mystring1.at(i)=='*')
        {
            symbo.push_back(7);
        }
        if(mystring1.at(i)=='-')
        {
            symbo.push_back(8);
        }
        if(mystring1.at(i)=='+')
        {
            symbo.push_back(9);
        }
        if(mystring1.at(i)=='a')
        {
            symbo.push_back(13);
        }
        if(mystring1.at(i)=='b')
        {
            symbo.push_back(14);
        }
        if(mystring1.at(i)=='$')
        {
            symbo.push_back(0);
        }
    }
  



    if(parenthanigi+parenthklini+asteriskos+minus+plus+a+bb==mystring.size())//elegxos an h symvoloseira apoteleite mono apo (,),a,b,+,-,*
    {
        cout<< "inputed string has the correct form , initiating string analyzer\n";
       
        automata(symbo,mystring1);
    
    }
    else
    {
        cout<<"you have inputted a string that does not contain only  {(,),*,-,+,a,b} , repeat using a correct string \n ";
    }



    














    return 0; 

}