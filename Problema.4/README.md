# Problema 4
### Scrieţi clasele necesare astfel încît codul următor sa functioneze corect:
  

    int main()  
    {  
        ListaParagrafe L = ListaParagrafe();

        L.Add("Ce usor e testul la C++!");
        L.Add("Ce faci? Bine, tu Ce faci? Tot Bine.");

        Procesator *P = new ProcesatorNumaraCuvinte();
        Procesator *P2 = new ProcesatorNumaraPropozitii();

        for(const auto paragraf: L)
        {
            P->Proceseaza(paragraf.Text);
            P2->Proceseaza(paragraf.Text);
        }

        P->Print();
        cout << endl;
        P2->Print();

        delete P;
        delete P2;

        for (const auto paragraf : L)
        {
            cout << paragraf.Text << endl;
        }

        return 0;
    }  

> Separatorii pentru propozitii sunt punct, semnul întrebării si semnul exclamarii. 
> Separatorii pentru cuvinte sunt cei pentru propozitii la care se adaugă virgula si spaţiu. 
> Nu apar separatori consecutivi.

### Punctajul se va acorda in felul urmator:  
|Task|Numar puncte|
|--|--|
|Clasa(clasele) scrie in fisiere .h si .cpp distincte|2 pct|
|Codul cu main-ul dat ruleaza si afiseaza ce trebuie pe ecran| 3 pct  |
|Codul compileaza corect| 2 pct  |
|ListaParagrafe::Add| 2 pct  |
|Range for pentru clasa ListaParagrafe|3 pct  |
|clasa Procesator| 3 pct  |
|ProcesatorNumaraCuvinte::Print| 2 pct  |
|ProcesatorNumaraCuvinte::Proceseaza| 6 pct  |
|ProcesatorNumaraPropozitii::Print| 2 pct  |
|ProcesatorNumaraPropozitii::Proceseaza| 5 pct  |

> Total 30 pct