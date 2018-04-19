# Problema 5
### Scrieţi clasele necesare astfel încît codul următor sa functioneze corect:
  

    int main()  
    {  
        Punct p1(-2, -2), p2(2, -3), p3(1, 1), p4(8, 8), p5(1, 1), p6(1, 12), p7(2, 4);
        Multime M, M2 = { p5, p6, p7 };
        (((M += p1) += p2) += p3) += p4;

        double d = p1 | p3;
        cout << "Distanta p1 - p3: " << d << endl;

        M.distanta_maxima_intre_puncte();
        M -= p4;
        M.distanta_maxima_intre_puncte();

        cout << endl;
        M += M2;
        M.afiseaza();

        return 0;
    }  

> Operatorul | intre 2 obiecte de tip Punct, va returna distanta dintre cele 2 Puncte.
> Multimile nu au voie sa contina duplicate.
> Daca programul ruleaza corect, va afisa pe ecran urmatoarele:

    Distanta p1 - p3: 4.24264
    Distanta maxima dintre 2 punte: 14.1421
    Distanta maxima dintre 2 punte: 4.24264

    -2 -2
    2 -3
    1 1
    1 12
    2 4

### Punctajul se va acorda in felul urmator:  
|Task|Numar puncte|
|--|--|
|Clasa(clasele) scrie in fisiere .h si .cpp distincte|2 pct|
|Codul cu main-ul dat ruleaza si afiseaza ce trebuie pe ecran| 3 pct  |
|Codul compileaza corect| 2 pct  |
|Implementarea constructorilor| 2 pct  |
|Operatorul \| |3 pct  |
|Operatorul += cu Punct| 3 pct  |
|Operatorul += cu Multime| 4 pct  |
|Operatorul -= | 4 pct  |
|Eliminarea duplicatelor| 3 pct  |
|Multime::distanta_maxima_intre_puncte| 2 pct  |
|Multime::afiseare| 2 pct  |

> Total 30 pct