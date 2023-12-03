#include <iostream>
using namespace std;
#include <vector>



int counterx(string s) //function gia na metraw x 
        {
            int count=0;
            for (int i = 0; i != s.size(); i++)
            
                if (s[i] == 'x') 
                count++;
            
            return count;
        }
int countery(string s) //fucntion gia na metraw y 
        {
            int count=0;
            for (int i = 0; i < s.size(); i++)
            
                if (s[i] == 'y') 
                count++;
            
            return count;
        }



void automata(string s) //synartisi elegxou symvolosiras me vasi tus kanones 
{  
   

    cout<<"string is \n"; //pliroforisi xristi gia thn simvolosira tou 
    cout<< s;

                
    string st;  // edo einai h antistoixi katastasi pu tha allazei   
    
    
    int state; 
    vector < int > soros; //xrisi vector os stiva 
   
  
    cout<< " \n";
    
    
    
    for(int i=0; i!=s.size()+1;(i++)) // tha eiparxi arithmos epanalipseon isos me to megethos tis simvoloseiras kathos h proti epanalipsi ekxorei arxiki katastasi kai proto simvolo stivas 
    {    
        
           
        
      
           
            if(i==0) //proti epanalipsi 
            {
                st="k1";
                state=1;

                soros.push_back(8);
               
                
                
                
               
               
            
            }
            int f = s.size() ;
         
            
            if(i==f) // otan gini to i iso me to megethos tis simvoloseiras tote elegxume an eimaste se teliki katastash KAI o soros na exei san simvolo to 8 = $ diladi elegxos kanona p(k2,$,ε)={k2,ε}
            {
                if(state==1 && soros[soros.size()-1]==8)
                {   
                    state=2;
                    st="k2";
                    cout<<"was on state k1,last stack symbol =$ ,current string symbol = empty \n";
                    cout<<"a final state was reached = k2, meaning that the string given is correct \n";
                    
                  
                }
                else //ean den isxyoun ta parapano sxolia , tote dothike lathos simvoloseira 
                {
                    cout<<"string not recognised because last stack symbol was "<<1<<" when it should have been $\n";
                   
                }
            
                break;
            }
          
            
            
            
         
        
            if(state==1 && soros[soros.size()-1]==8 && s.at(i)=='x' && i<s.size()) // elegxos kanona p(k1,$,x)={k1,$1}
            {   
                

                
               
                soros.push_back(1);
                st = "k1";
                state=1;  
               
                cout<<" state was k1 ,stack symbol was $ , current string symbol = x \n";
                cout<<"movement : state = k1 ,stack  adding 1 \n";
               
               
                continue;
               
            }

            if(state==1 && soros[soros.size()-1]==1 && s.at(i)=='x' && i<s.size()) // elegxos kanona p(k1,1,x)={k1,11}
            {  
              
                state=1;
                soros.push_back(1);
               
                st="k1";
                cout<<"was on state k1,last stack symbol = 1 , current string symbol =x \n";
                cout<<"movement : state = k1 ,stack= adding a 1 \n";
                  
               continue;
            }
            
            
       
            if(state==1 && soros[soros.size()-1]==1 && s.at(i)=='y'&& i<s.size() ) //elegxos kanona p(k1,1,y)={k1,ε}
            {

                
                state=1;
                soros.pop_back();
              
                st="k1";
                cout<<"was on state k1,last stack symbol was 1 , curent string symnbol =y \n";
                cout<<"movement : state = k1 ,stack removing a 1 \n";
               
                continue;
            }

            
            
            
        
            

    
    }       

}



int main()
{
 
    int xcount1 ;
    int ycount1 ;

 
    string mystring1;



    cout << "Enter your string:  \n";
    cin >> mystring1 ;
  
    xcount1= counterx(mystring1);
    
    ycount1=countery(mystring1);
   

   
    if(xcount1==ycount1&&mystring1.at(0)!='y'&&xcount1+ycount1==mystring1.size())//arxikos elegxos gia egirotita symvoloseiras , diladi na exei iso arithmo x kai y , na apoteleite mono apo x kai y kai na atxizei mono apo x 
    {
        automata(mystring1);

    }
    else //an o arxikos elegxos egirotitas apotixi tote tiponoume katalhlo minima 
    {
         
		cout<<"you have inputted a string in which the number of x and y are not equal or the string isnt made only from x and y , or the string doesnt begin with x as it should,repeat using a correct string \n ";//prepei na to xanatrexei apo tin arxi
    }
    
    
    return 0;
    
}
