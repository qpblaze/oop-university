# Problema 2:  
### Scrieţi clasele necesare astfel încît codul următor sa functioneze corect:
  

    int main()  
    {  
	    ListaCumparaturi l;

		(l += Cumparaturi("paine", 5)) += Cumparaturi("peste", 2);
		l.Print();
		
		l -= "peste";
		l.Print();

		ListaCumparaturi l2;
		l2 += Cumparaturi("lapte", 4);
		l2 += Cumparaturi("paine", 10);
		(l | l2).Print();
		
		return 0;
    }  

> Operatorul “|” relizează reuniunea a doua liste de cumparaturi, iar în
> cazul elementelor duplicate  se aduna valorile corespunzătoare.

### Punctajul se va acorda in felul urmator:  
|Task|Numar puncte|
|--|--|
|Clasa(clasele) scrie in fisiere .h si .cpp distincte|2 pct|
|Codul cu main­ul dat ruleaza si afiseaza ce trebuie pe ecran| 3 pct  |
|Codul compileaza corect| 2 pct  |
|Implementare operator \| | 7 pct  |
|Implementare operator +=|5 pct  |
|Implementare operator ­=| 5 pct  |
|Implementare functie Print| 3 pct  |
|Implementare constructor Cumparaturi| 3 pct  |

> Total 30 pct
