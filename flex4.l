Chr [a-z]
Num 1|2|3|4|5|6|7|8|9
Op "*"|"/"|"+"|"-"|"%"
Equals "="
semicolon ";"
KanA {Num}|{Chr}
Epanal {Op}{KanA}
Ekf {Chr}{Equals}{KanA}{Epanal}+{semicolon}
%%

{Ekf} {
    printf("Your expression has been recognized");
}


[^\n]+ printf("wrong expression try again");

%%

int main(){
    printf("the correct expression form is x=a+3; ,Now please input your own expression \n");
    yylex();
}