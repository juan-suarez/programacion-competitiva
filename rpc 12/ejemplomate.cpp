for(int T=1; T <= X;T++)
{
    nuevo_capital= capital + (capital * interes);
    cout<<"el capital en el instante "<<T<<"es: "<<nuevo_capital<<endl;
    capital = nuevo_capital; 
}