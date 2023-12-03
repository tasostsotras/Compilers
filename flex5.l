Ekf "point "+[A-H]|"line "+[A-H]{2}|"triangle "+[A-H]{3}|"square "+[A-H]{4}|"pentagon "+[A-H]{5}|"hexagon "+[A-H]{6}|"heptagon "+[A-H]{7}|"octagon "+[A-H]{8} 
%%
{Ekf} {
    printf("Your expression has been recognized \n");
}


[^\n]+ printf("wrong expression please try again \n");
%%

int main(){
    printf("please insert your expressionn,correct expression form is : point A , triangle ABC , no more than 1 of each character \n"); 
    yylex();
    
   
} 