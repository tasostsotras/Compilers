#include <iostream>
using namespace std;
#include <ctime>


int search(char el,string s) //synartisi anazitisis mh termatikon symvolon oste na ginei antikatastasi tus tyxaia 
{
    int n = s.size();
    int i = 0;
    bool flagf=false;
    while (i <n )
    {
        if (s[i] == el ) 
        {
            flagf=true;
            break ;
        }
        i++;

    }
    if(flagf==false)
    {
        i=-1;
    }
    return i;

}
string symbo(string st)//vasiki synartisi paragogis simvoloseiron 
{   
    
    st="E";
    int temp;
    bool flag=true;
    
    while(flag ) // epanaliptiki diadikasia pu symveni gia oso h symvoloseira exei mi termatika simvola mesa 
    {

        
        cout<<"string is "<<st<<"\n";
        temp=search('E',st);
       

        if(temp!=-1) //elegxos gia yparksi E kai analogi diadikasia metatropis simvoloseiras 
        { 
            cout<<"turning E to (Y) \n";
            string token1=st.substr(0,temp+1); //kopsimo simvoloseiras sta 2 kai diagrafi toy termatikoy symvolou kai adikatastash tou me thn analogi paragogi 
            
            string token2=st.substr(temp+1,st.size()-1);
           
            
            token1.pop_back();
            
           
            
            
            token1=token1+"(Y)";
           
            st=token1+token2;
            cout<<"done and string is "<< st<<"\n";


            
            
            
        }
        temp=search('Y',st);
        if(temp!=-1) //elegxos gia yparksi Y 
        {
            cout<<"turning Y to  A and B \n";
            
            string token1=st.substr(0,temp+1);
          
            string token2=st.substr(temp+1,st.size()-1);
           

            token1.pop_back();
           
            
           
         
            
           
            token1=token1+"AB";
            
            st=token1+token2;
            cout<<"done and string is "<< st<<"\n";
          
            

        }                      
        temp=search('A',st); // elegxos gia yparksi A asthn simvoloseira kai adikatastasi toy me tixea paragogi 
        if(temp!=-1)
        {
            srand((unsigned) time(0)); //rithmisi oste h tyxaia paragogi mna mhn einai idia 
            int p =(rand() % 2); 
            if(p==0)
            {
                cout<<"turning A to v \n";
              
                string token1=st.substr(0,temp+1);
               
                string token2=st.substr(temp+1,st.size()-1);
               
                token1.pop_back();
               
                
               
            
               
                token1=token1+"v";
                
                st=token1+token2;
                cout<<"done and string is "<< st<<"\n";
               
                
            }
            if(p==1)
            {
                cout<<"turning A to E \n";
              
                string token1=st.substr(0,temp+1);
                
                string token2=st.substr(temp+1,st.size()-1);
                
                token1.pop_back();
                
                
            


               
                token1=token1+"E";
               
                st=token1+token2;
                cout<<"done and string is "<< st<<"\n";
                
                
            }


        }
        temp=search('B',st); // paromoia me thn metatropi tou A 
        {
            srand((unsigned) time(0));
            int p =(rand() % 7);
            
            if(p==0)
            {
                cout<<"turning B to -<Y> \n";
             
                string token1=st.substr(0,temp+1);
          
                string token2=st.substr(temp+1,st.size()-1);
           
                token1.pop_back();
                
               
                token1=token1+"-Y";
              
                st=token1+token2;
                cout<<"done and string is "<< st<<"\n";

                
                

            }
            if(p==1)
            {
                cout<<"turning B to +<Y> \n";
                
                string token1=st.substr(0,temp+1);
                
                string token2=st.substr(temp+1,st.size()-1);
            
                token1.pop_back();

                
            
                

                token1=token1+"+Y";
               
                st=token1+token2;
                cout<<"done and string is "<< st<<"\n";

               
               

            }
            if(p==2||p==3||p==4||p==5||p==6) //evnohsh paragoghs kenou gia na teleiwni h symvoloseira 
            {
                cout<<"turning B to empty \n";
       
                string token1=st.substr(0,temp+1);
            
                string token2=st.substr(temp+1,st.size()-1);
               
                token1.pop_back();
                
               
            
               
                
                
                st=token1+token2;
                cout<<"done and string is "<< st<<"\n";

                
              
            }



        }
        int temp1=search('E',st);
        int temp2=search('Y',st);
        int temp3=search('A',st);
        int temp4=search('B',st);
        if(temp1==-1 && temp2==-1 && temp3==-1 && temp4==-1) // elegxos an h simvoloseira apoteleite mono apo termatika symvola kai en telei eksodos 
        {
            cout<<"the allowed steps have been met and the string is this one  \n ";
            flag=false;
            
        }
        

        
        
        

    }
    cout<<"this is the string "<<st<<"\n";
    
    
        
   

   

    
   

   
   


}
int main()
{
    string s="f"; // string pu tha bei san orisma sthn arxiki synarthsh 
    symbo(s);

}