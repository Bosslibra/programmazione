//PROGETTO 2 CAPITOLO 5
#include <iostream>
using namespace std;

double hatSize(double height, double weight);

double jacketSize(double height, double weight, int age);

double waistinInches(double height, double weight, int age);

int main() {
	double height, weight;
	int age;
	char ans;
	do {
		cout << "Inserire altezza in inches: \n";
		cin >> height;
		cout << "Inserire peso in pounds: \n";
		cin >> weight;
		cout << "Inserire età: \n";
		cin >> age;
		cout << "Hat size: " << hatSize(height, weight) << endl;
		cout << "Jacket size: " << jacketSize(height, weight, age) << endl;
		cout << "Waist in inches: " << waistinInches(height, weight, age)
				<< endl << endl;
		cout << "rifare (y/n)?" << endl;
		cin >> ans;
	} while (ans == 'y');
	return 0;
}

double hatSize(double height, double weight) {
	double hatsize;
	hatsize = (weight / height) * 2.9;
	return hatsize;
}

double jacketSize(double height, double weight, int age) {
	double jacketsize;
	double adder = 0;
	while (age > 30) {
		adder = adder + (1 / 8);
		age = age - 10;
	}
	jacketsize = ((weight * height) / 288) + adder;
	return jacketsize;
}

double waistinInches(double height, double weight, int age) {
	double waist;
	double adder = 0;
	while (age > 28) {
		adder = adder + (1 / 10);
		age = age - 2;
	}
	waist = (weight / 5.7) + adder;
	return waist;
}

//PROGETTO 1 CAPITOLO 7
#include <iostream>
using namespace std;

int greatest(int array[], int size);

int main() {
	int array[10], size;
	cout << "insert array size (max 10): \n";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "insert array input: \n";
		cin >> array[i];
	}
	cout << greatest(array, size);
	return 0;
}

int greatest(int array[], int size) {
	int great;
	great = array[0];
	for (int i = 1; i < size; i++) {
		if (array[i] > great) {
			great = array[i];
		}
	}
	return great;
}

//PROGRAMMA 3 CAPITOLO 10
#include <iostream>
using namespace std;

class AccountBalance {
private:
	double balance;
public:
	AccountBalance() {
		balance = 0;
	}
	;

	double addMoney() {
		double deposit;
		cout << "Insert value to add to balance: \n";
		cin >> deposit;
		return balance = balance + deposit;
	}
	double withdrawMoney() {
		double withdrawal;
		cout << "Insert value to be withdrawn: \n";
		cin >> withdrawal;
		if (withdrawal > balance) {
			cout
					<< "Transaction failed: the amount specified is higher than the balance.\nThe balance is exceeded by "
					<< withdrawal - balance << endl;
			return balance;
		}
		return balance = balance - withdrawal;
	}
	void printBalance() {
		cout << "Current balance is: " << balance << endl;
	}
	double returnBalance() {
		return balance;
	}
};

int main() {
	int switchval;
	AccountBalance account;
	cout << "Operazioni disponibili:\n";
	cout << "1. Inizializzare un valore di bilancio.\n";
	cout << "2. Depositare una somma.\n";
	cout << "3.Ritirare una somma.\n";
	cout << "4.Visualizzare bilancio.\n";
	cout << "Selezionare tra le opzioni.\n";
	cin >> switchval;
	switch (switchval) {
	case 1:
		/*cout<<"Inserire bilancio iniziale:\n";
		 cin>>value;
		 account.AccountBalance(value);
		 account.printBalance();*/
		break;
	case 2:
		account.addMoney();
		account.printBalance();
		break;
	case 3:
		account.withdrawMoney();
		account.printBalance();
		break;
	case 4:
		account.printBalance();
		break;
	}

	return 0;
}

//PROGETTO 1 CAPITOLO 1O
#include <iostream>
using namespace std;

class StudentRecord {
private:
	int Quiz_1, Quiz_2, MidExam, FinExam;
	char grade;
public:
	StudentRecord() {
		Quiz_1 = 0;
		Quiz_2 = 0;
		MidExam = 0;
		FinExam = 0;
		grade = 'F';
	}
	int getQuiz1() {
		cout << "Inserire voto per il primo quiz:\n";
		cin >> Quiz_1;
		Quiz_1 = Quiz_1 * 10;
		return Quiz_1;
	}
	int getQuiz2() {
		cout << "Inserire voto per il secondo quiz:\n";
		cin >> Quiz_2;
		Quiz_2 = Quiz_2 * 10;
		return Quiz_2;
	}
	int getMidExam() {
		cout << "Inserire voto per l'esame di medio termine:\n";
		cin >> MidExam;
		return MidExam;
	}
	int getFinExam() {
		cout << "Inserire voto per l'esame di fine anno:\n";
		cin >> FinExam;
		return FinExam;
	}
	void outputRecord() {
		cout << "Ogni risultato mostrato è normalizzato in base 100." << endl;
		cout << "Il risultato del primo quiz è: " << Quiz_1 << endl;
		cout << "Il risultato del secondo quiz è: " << Quiz_2 << endl;
		cout << "Il risultato dell'esame di medio termine è: " << MidExam
				<< endl;
		cout << "Il risultato dell'esame di fine anno è: " << FinExam << endl;
	}
	void Average() {
		cout << "La media numerica è: ";
		cout << (Quiz_1 + Quiz_2 + MidExam + FinExam) / 4 << endl;
	}
	void finalGrade() {
		double valueQuiz1 = Quiz_1 / 8;
		double valueQuiz2 = Quiz_2 / 8;
		double valueMid = MidExam / 4;
		double valueFin = FinExam / 2;
		int valueTot = valueQuiz1 + valueQuiz2 + valueMid + valueFin;
		if (valueTot >= 90) {
			grade = 'A';
		} else if (valueTot >= 80 && valueTot < 90) {
			grade = 'B';
		} else if (valueTot >= 70 && valueTot < 80) {
			grade = 'C';
		} else if (valueTot >= 60 && valueTot < 70) {
			grade = 'D';
		} else if (valueTot < 60) {
			grade = 'F';
		}
		cout << grade;
	}
};

int main() {
	StudentRecord student;
	student.getQuiz1();
	student.getQuiz2();
	student.getMidExam();
	student.getFinExam();
	student.outputRecord();
	student.Average();
	student.finalGrade();
	return 0;
}

//BUBBLESORT NON RICORSIVO
#include <iostream>
using namespace std;

int main() {
	int a[] = { 2, 4, 65, 3, 6, 7, 8, 6, 1 };
	int i = 0, save;
	bool t = true;
	while (t) {
		t = false;
		for (int i = 0; i < 9; i++) {
			if (a[i] > a[i + 1]) {
				save = a[i + 1];
				a[i + 1] = a[i];
				a[i] = save;
				t = true;
			}
		}
	}
	for (int j = 0; j < 9; j++) {
		cout << a[j] << endl;
	}
	return 0;
}

//BUBBLESORT RICORSIVO
#include <iostream>
using namespace std;

int* f(int a[], int i, int j, int dim) {
	if (i >= dim - 1) {
		i = 0;
		j++;
	} //Controlla se ha invertito tutti i valori
	if (j == dim) {
		return a;
	} //Termina == Caso base
	if (a[i] > a[i + 1]) {
		int tmp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = tmp;

	} //Swap
	i++;
	return f(a, i, j, dim);

}

int main() {
	int a[] = { 89, 3, 8, 7 };
	f(a, 0, 0, 4);
	for (int i = 0; i < 4; i++) {
		cout << a[i] << endl;
	}
	return 0;
}

//OSPITIFESTIVAL ESAME FEBBRAIO
#include <iostream>
using namespace std;

class OspitiFestival {
protected:
	struct ospite {
		int costo;
		char* nome;
		int tPerformance;
		ospite* next;
	};

public:
	typedef ospite* ptr_lista;
	ptr_lista head;

	OspitiFestival() {
		head = NULL;

	}

	void add(int costo, char nome[10], int tPerformance) {
		ptr_lista t = head;
		if (head == NULL) {
			head = new ospite;
			head->costo = costo;
			head->nome = nome;
			head->tPerformance = tPerformance;
			head->next = NULL;
		} else {
			while (t->next != NULL) {
				t = t->next;
			}
			t->next = new ospite;
			t->next->costo = costo;
			t->next->nome = nome;
			t->next->tPerformance = tPerformance;
			t->next->next = NULL;
		}
	}

	char* name() {

		ptr_lista t = head;

		if (t == NULL) {
			return "ListaVuota";
		} else {
			char* tmp = t->nome;
			int costo = t->costo;
			while (t->next != NULL) {
				if ((t->costo) > (costo)) {
					tmp = t->nome;
					costo = t->costo;
				}
				t = t->next;
			}
			return tmp;
		}

	}
};

class OspitiFestival_Plus: public OspitiFestival {
public:
	double costoTot, costoMed;
	OspitiFestival_Plus() {
		costoTot = 0;
		costoMed = 0;
	}
	double getCostoTotale() {
		ptr_lista f = head;
		if (head == NULL) {
			costoTot = 0;
		} else {
			costoTot = f->costo;
			while (f->next != NULL) {

				costoTot = costoTot + f->next->costo;
				f = f->next;
			}
		}
		return costoTot;
	}
	double CostoMed() {
		int i = 1;
		ptr_lista p = head;
		if (head == NULL) {
			costoMed = 0;
		} else {
			while (p->next != NULL) {
				i++;
				p = p->next;
			}
		}
		return costoMed = costoTot / i;
	}
};

int main() {
	OspitiFestival_Plus os;
	os.add(11, "ciao2", 33);
	os.add(12, "ciao3", 35);
	os.add(1, "ciao4", 43);
	os.add(11, "ciao5", 32);
	cout << os.head->nome << endl;
	cout << os.head->next->nome << endl;
	cout << os.head->next->next->nome << endl;
	cout << os.head->next->next->next->nome << endl;
	cout << os.name() << endl;
	os.getCostoTotale();
	cout << os.costoTot << endl;
	os.CostoMed();
	cout << os.costoMed << endl;
	return 0;
}

//POOL DI N SEQUENZE ORDINATE ESAME FEBBRAIO
#include <iostream>
using namespace std;

const int n = 10;
typedef int pool[n];
void push(int k, pool p) {

	bool found = false;
	int i = 0;
	while (!found && i < n) {
		if (p[i] > k) {
			if (i + 1 < n) {
				int tmp = k;
				for (int j = i; j < n; j++) {
					int s = p[j];
					p[j] = tmp;
					tmp = s;
				}

			} else {
				p[i] = k;
			}
			found = true;
		}
		i++;
	}
}
int main() {
	pool f = { 0, 1, 2, 3, 4, 5, 7, 8, 10, 11 };
	push(9, f);
	for (int i = 0; i < n; i++) {
		cout << f[i] << endl;
	}
	return 0;
}

/*SCRIVERE UN PROGRAMMA CHE CREA UNA LISTA DI LUNGHEZZA LENGTH (PRESA IN
 INPUT) I CUI ELEMENTI SONO NUMERI GENERATI CASUALMENTE, LI INSERISCE IN
 UNA LISTA E POI:
 -STAMPA LA LISTA DEGLI INPUT
 -STAMPA IL VALORE PIÙ VICINO ALLA MEDIA*/

#include <iostream>
#include <ctime>
#include <cstdlib>  // For srand() and rand()
using namespace std;

struct node {
	int val;
	node *next;
};
typedef node* ptr_lista;

int randomVal() {
	int r;
	srand(time(NULL));  // Initialize random number generator
	r = (rand() % 10) + 1;
	return r;
}
int randomVal(int n) {
	int r;
	srand(n + (time(NULL)));  // Initialize random number generator
	r = (rand() % 10) + 1;
	return r;
}
void addNodes(int lenght, struct node *head) {

	head->val = randomVal();
	head->next = NULL; //Inizialized first node
	ptr_lista temp = head;
	for (int i = lenght - 1; i > 0; i--) {
		temp->next = new node;
		temp = temp->next;
		temp->val = randomVal(i * i);
		temp->next = NULL;
	}

}

void printNodes(struct node *head) {
	ptr_lista p = head;
	while (p->next != NULL) {
		cout << p->val << endl;
		p = p->next;
	}
	cout << p->val << endl;
}

void mediaNodi(struct node *head) {
	ptr_lista m = head;
	int somma = 0, i = 0;
	if (m->next == NULL) {
		somma = m->val;
	} else {
		while (m->next != NULL) {
			somma = somma + m->val;
			i++;
			m = m->next;
		}
	}
	cout << "Media: " << somma / i << endl;
}

int main() {
	int lenght;
	cout << "Insert lenght: \n";
	cin >> lenght;
	ptr_lista head = new node;
	addNodes(lenght, head);
	printNodes(head);
	mediaNodi(head);

	return 0;
}

/*SCRIVERE UN PROGRAMMA CHE PRENDE IN INPUT INTERI DALL’UTENTE FINCHÈ
 L’UTENTE NON INSERISCE 0, POI PRENDE UN’ ALTRO INTERO N E RIMUOVE DALLA
 LISTA TUTTI GLI INTERI MULTIPLI DI N, QUINDI STAMPA LA LISTA [DIFFICILE]*/

#include <iostream>
using namespace std;

struct node {
	int val;
	node* next;
};
typedef node* ptr_lista;

void getInput(ptr_lista head) {
	int n;
	cout << "Inserisci n: \n";
	cin >> n;
	head->val = n;
	head->next = NULL;

	while (n != 0) {
		cout << "Inserisci n: \n";
		cin >> n;
		if (n != 0) {
			ptr_lista p = head;
			while (p->next != NULL) //aggiunta in coda
			{
				p = p->next;
			}
			p->next = new node;
			p->next->val = n;
			p->next->next = NULL;
		}

	}
}

void searchMult(int n, ptr_lista& head) {
	ptr_lista p = head;
	ptr_lista prec = head;
	if (head != NULL) {
	}
	while (p->next != NULL) { //se la testa è un multiplo di 3 --> elimina il nodo in testa	
		if (p->val % n == 0 && head == p) {
			head = head->next;
			prec = head;
			p = head;
		} else if (p->val % n == 0 && head != p) {
			prec->next = p->next;
			p = prec;
			prec = p;
			p = p->next;
		} else {
			prec = p;
			p = p->next;
		}

	}
	if (p->val % 3 == 0) { //coda
		prec->next = NULL;
		p = prec;
	}
}

void printNodes(ptr_lista head) {
	cout << "debug\n";
	ptr_lista p = new node;
	p = head;
	while (p != NULL) {
		cout << "debug 1" << endl;
		cout << p->val << "\t";
		p = p->next;
	}
}

int main() {

	ptr_lista head = new node;

	getInput(head);
	printNodes(head);
	searchMult(3, head);
	printNodes(head);

	return 0;
}

/*Calcolare tempo per i primi 20 episodi di Critical Role*/
#include <iostream>
using namespace std;

class Time {
private:
	int ore;
	int min;
	int sec;
public:
	Time() {
		ore = 0;
		min = 0;
		sec = 0;
	}

	void addTime() {
		int newore, newmin, newsec;
		cout << "Inserire ore, minuti e secondi da aggiungere:" << endl;
		cin >> newore >> newmin >> newsec;
		ore = ore + newore;
		min = min + newmin;
		while (min > 59) {
			min = min - 60;
			ore++;
		}
		sec = sec + newsec;
		while (sec > 59) {
			sec = sec - 60;
			min++;
		}
	}

	void stampa() {
		cout << ore << ":" << min << ":" << sec << endl;
	}
};

int main() {

	Time obj;
	for (int i = 1; i <= 20; i++) {
		obj.addTime();
		obj.stampa();
		cout << "Number of episodes " << i << endl;
	}
	return 0;
}

/*creare un albero binario di interi positivi con la seguente forma
 la radice ha valore n, preso in input
 -il figlio sinistro ha valore n / 2 (se il risultato è 0 il figlio non
 esiste)
 -il figlio destro ha valore n - 2 (se il risultato è 0 o negativo il figlio
 non esiste)*/
#include <iostream>
using namespace std;

struct b_tree {
	int val;
	b_tree* ltree, *rtree;
};
typedef b_tree* ptr_btree;

ptr_btree create_btree(ptr_btree t, int n) {
	if (n > 0) {
		if (t == NULL) {
			t = new b_tree;
			t->val = n;
			t->ltree = NULL;
			t->rtree = NULL;
			t->ltree = create_btree(t->ltree, n / 2);
			t->rtree = create_btree(t->rtree, n - 2);
		}
	}
	return t;
}

void visit(ptr_btree t, bool ltree1) {
	if (t != NULL) {
		visit(t->ltree, true);
		if (ltree1) {
			cout << "L:" << t->val << " ";
		} else {
			cout << "R:" << t->val << " ";
		}

		visit(t->rtree, false);
	}
}

int main() {
	int n;
	cin >> n;
	visit(create_btree(NULL, n), false);

	return 0;
}

/*creare un albero binario di interi positivi con la seguente forma + altri metodi
 la radice ha valore n, preso in input
 -il figlio sinistro ha valore n / 2 (se il risultato è 0 il figlio non
 esiste)
 -il figlio destro ha valore n - 2 (se il risultato è 0 o negativo il figlio
 non esiste)*/
#include <iostream>
using namespace std;

struct b_tree {
	int val;
	b_tree* ltree, *rtree;
};
typedef b_tree* ptr_btree;

ptr_btree create_btree(ptr_btree t, int n) {
	if (n > 0) {
		if (t == NULL) {
			t = new b_tree;
			t->val = n;
			t->ltree = NULL;
			t->rtree = NULL;
			t->ltree = create_btree(t->ltree, n / 2);
			t->rtree = create_btree(t->rtree, n - 2);
		}
	}
	return t;
}
ptr_btree create_btreeFib(ptr_btree t, int fib) {
	if (fib >= 0) {
		if (fib == 0) {
			fib = 0;
			t = new b_tree;
			t->val = fib;
			t->ltree = NULL;
			t->rtree = NULL;
		} else if (fib == 1) {
			fib = 1;
			t = new b_tree;
			t->val = fib;
			t->ltree = NULL;
			t->rtree = NULL;
		} else {
			if (t == NULL) {
				t = new b_tree;

				t->ltree = NULL;
				t->rtree = NULL;
				t->ltree = create_btreeFib(t->ltree, fib - 1);
				t->rtree = create_btreeFib(t->rtree, fib - 2);
				t->val = t->rtree->val + t->ltree->val;
			}

		}

	}

	return t;
}

void visitProf3(ptr_btree t, bool ltree1, int prof) {

	if (t != NULL) {
		if (prof == 3) {
			if (ltree1) {
				cout << "L:" << t->val << " ";
			} else {
				cout << "R:" << t->val << " ";
			}

		}
		prof++;
		visitProf3(t->ltree, true, prof);
		cout << endl;
		visitProf3(t->rtree, false, prof);

	}
}
void visit(ptr_btree t, bool ltree1) {

	if (t != NULL) {

		if (ltree1) {
			cout << "L:" << t->val << " ";
		} else {
			cout << "R:" << t->val << " ";
		}

		visit(t->ltree, true);
		cout << endl;
		visit(t->rtree, false);

	}
}
ptr_btree removeodd(ptr_btree t, ptr_btree prec) {
	if (t != NULL) {

		if (t->val % 2 != 0 && t->ltree == NULL && t->rtree == NULL
				&& prec->ltree == t) {
			prec->ltree = NULL;

		} else if (t->val % 2 != 0 && t->ltree == NULL && t->rtree == NULL
				&& prec->rtree == t) {
			prec->rtree = NULL;
		} else {
			prec = t;
			if (t->ltree != NULL) {
				removeodd(t->ltree, prec);

			}
			if (t->rtree != NULL) {
				removeodd(t->rtree, prec);

			}
		}

	}
	return t;
}
void printBT(const std::string& prefix, const ptr_btree node, bool isLeft) {
	if (node != nullptr) {
		std::cout << prefix;

		std::cout << (isLeft ? "├──" : "\___");

		// print the value of the node
		std::cout << node->val << std::endl;

		// enter the next tree level - left and right branch
		printBT(prefix + (isLeft ? "|   " : "    "), node->ltree, true);
		printBT(prefix + (isLeft ? "|   " : "    "), node->rtree, false);
	}
}

void printBT(const ptr_btree node) {
	printBT("", node, false);
}
int main() {

	int n;
	cin >> n;
	//visitProf3(create_btree(NULL, n), false, 0);
	printBT(create_btreeFib(NULL, n));
	cout << endl;
	printBT(removeodd(create_btreeFib(NULL, n), NULL));

	return 0;
}

/*Definire una classe convertitore, comprensiva di costruttore,
 al fine di realizzare un convertitore di valute, ad esempio lire/euro.
 Per il programma si richiede la scrittura di almeno una funzione membro di calcolo,
 una di output e la definizione di uno o più campi privati ove memorizzare i dati,
 nonché la scrittura del main.*/

#include <iostream>
using namespace std;

class Convertitore {
private:
	double valoreInput;
	double inEuro;
	double inSterline;
public:
	Convertitore() {
		valoreInput = 0;
		inEuro = 0;
		inSterline = 0;
	}
	double ConvInEuro() {

		return inEuro = valoreInput * 0.89; //al giorno 26/06/2019 una sterlina vale 1.12 euro
	}
	double ConvInSterlina() {
		return inSterline = valoreInput * 0.89; //al giorno 26/06/2019 un euro vale 0.89 sterline
	}
	void execute() {
		bool cont = true;
		int switcher;
		while (cont) {
			cout << "Inserire valore: \n";
			cin >> valoreInput;
			cout
					<< "Opzioni\nTrasformare in:\n\t1- Euro\n\t2-Sterline\n Oppure:\n\t3- Esci\n";
			cin >> switcher;
			switch (switcher) {
			case 1:
				cout << "In euro is: " << ConvInEuro() << endl;
				break;
			case 2:
				cout << "In sterline is: " << ConvInSterlina() << endl;
				break;
			case 3:
				cont = false;
				cout << "Programma terminato.\n";
				break;
			}
		}
	}
};

int main() {
	Convertitore obj;
	obj.execute();

	return 0;
}

/*Definire una classe contoBanca con un saldo e
 metodi versa e preleva. Definire una sottoclasse
 contoInteressi con un metodo addizionale che
 aumenta il saldo del 2%*/

#include <iostream>
using namespace std;

class contoBanca {
public:
	double saldo;
	contoBanca() {
		saldo = 0;
	}

	double versa() {
		double versamento = 0;
		cout << "Quanto si vuole versare?\n";
		cin >> versamento;
		saldo = saldo + versamento;
		return saldo;
	}
	double preleva() {
		double prelievo = 0;
		cout << "Quanto si vuole versare?/n";
		cin >> prelievo;
		saldo = saldo + prelievo;
		return saldo;
	}
};

class contoInteressi: public contoBanca {
public:
	contoInteressi() :
			contoBanca() {
	}

	double interessi() {
		saldo = saldo + saldo * 0.02;
		return saldo;
	}
};
int main() {

	contoInteressi conto;
	conto.versa();
	conto.interessi();

	return 0;
}

/*definire una classe persona con campi opportuni, un
 costruttore e metodo presentati. Definire una
 sottoclasse impiegato con in più campi reparto e
 stipendio, un metodo presentati
 opportunamente modificato e un metodo aumento
 che aumenta lo stipendio del 5%*/

#include <iostream>
using namespace std;

class Persona {
public:
	char nome[10];
	int age;
	Persona() {
		age = 0;
	}
	char* insertName() {
		for (int i = 0; i < 10; i++) {
			cin >> nome[i];
		}
		return nome;
	}
	int insertAge() {
		cin >> age;
		return age;
	}
	void presentati() {
		cout << "Insert name:\n";
		insertName();
		cout << "Insert age:\n";
		insertAge();
	}
};
class Impiegato: public Persona {
public:
	char reparto;
	double stipendio;
	Impiegato() :
			Persona() {
		stipendio = 0;
		reparto = 'A';
	}
	char insertReparto() {
		cin >> reparto;
		return reparto;
	}
	double insertStipendio() {
		cin >> stipendio;
		return stipendio;
	}
	void presentati() {
		Persona::presentati();
		cout << "Insert reparto:\n";
		insertReparto();
		cout << "Insert stipendio:\n";
		insertStipendio();
	}
};

int main() {

	Impiegato impiegato;
	impiegato.presentati();
	return 0;
}

/*1.Definire una classe città con campi nome e
 numeroAbitanti, con un opportuno costruttore e metodi
 descrizione (che stampa le informazioni sulla città) e
 cambiaAbitanti, che cambia il numero di abitanti.
 2.Definire una classe capoluogo che è una città con in più
 l’informazione sulla regione di cui è capoluogo.
 3.Definire una classe capitale che è un capoluogo con in più
 l’informazione sulla nazione di cui è capitale.*/

#include <iostream>
#include <cstring>
using namespace std;

class Citta {

protected:
	char name[10];
	int abitanti;

public:
	Citta() {
		strcpy(name, "City");
		abitanti = 0;
	}

	char *nameCity() {
		cout << "Inserire nome città: \n";
		cin >> name;
		return name;
	}
	int cambiaAbitanti() {
		cout << "Inserire numero di abitanti: \n";
		cin >> abitanti;
		return abitanti;
	}
	void descrizione() {
		cout << "La città di " << name << " ha " << abitanti << " abitanti.\n";
	}

};

class Capoluogo: public Citta {

protected:
	char regione[20];

public:
	Capoluogo() :
			Citta() {
		strcpy(regione, "Regione");
	}
	char *nameRegione() {
		cout << "Inserire nome della regione: \n";
		cin >> regione;
		return regione;
	}
	void descrizione() {
		Citta::descrizione();
		cout << "E' inoltre capoluogo della regione " << regione << ".\n";
	}
};

class Capitale: public Capoluogo {
protected:
	char stato[20];

public:
	Capitale() :
			Capoluogo() {
		strcpy(stato, "stato");
	}
	char *nameStato() {
		cout << "Inserire nome stato: \n";
		cin >> stato;
		return stato;
	}
	void descrizione() {
		Capoluogo::descrizione();
		cout << "Nonchè capitale dell'" << stato << ".\n";
	}
};

int main() {

	Capitale bolo;
	bolo.nameCity();
	bolo.cambiaAbitanti();
	bolo.nameRegione();
	bolo.nameStato();
	bolo.descrizione();

	return 0;
}

/*definire una variabile di tipo intero,
 incrementarla due volte attraverso due
 puntatori distinti e stampare il risultato*/

#include <iostream>
using namespace std;

typedef int *intpoint;

int main() {

	intpoint p, d;
	int x;
	x = 1;
	cout << "x is initially " << x << endl;
	p = &x;
	*p = 3;
	cout << "after p increment, x is now " << x << endl;
	d = &x;
	*d = 9;
	cout << "after d increment, x is now " << x << endl;
	return 0;
}

/*allocare una variabile di tipo intero,
 incrementarla attraverso puntatore,
 stampare il risultato e deallocarla*/

#include <iostream>
using namespace std;

typedef int *intpoint;

int main() {

	intpoint p;
	p = new int;
	*p = 5;
	cout << "Il contenuto del pointer è: " << *p << endl;
	delete p;
	p = NULL;

	return 0;
}

/*prendere in input 10 interi e memorizzarli
 in un array di 10 interi utilizzando i puntatori
 (le lhs degli assegnamenti sono sempre operazioni *p).
 Poi stampare i valori*/

#include <iostream>
using namespace std;

typedef int *intpoint;

int main() {
	int a[10];
	intpoint p = new int;
	for (int i = 0; i < 10; i++) {
		cin >> *p;
		a[i] = *p;
	}
	for (int j = 0; j < 10; j++) {
		cout << a[j] << " ";
	}
	return 0;
}

/*definire una struttura di 5 campi interi e
 memorizzarci 5 interi presi in input utilizzando
 i puntatori (le lhs degli assegnamenti sono sempre
 operazioni *p). Poi stampare i valori*/

#include <iostream>
using namespace std;

typedef int *intpoint;

struct Str {
	int a, b, c, d, e;
};

int main() {

	intpoint p = new int;
	Str obj;
	cin >> *p;
	obj.a = *p;
	cin >> *p;
	obj.b = *p;
	cin >> *p;
	obj.c = *p;
	cin >> *p;
	obj.d = *p;
	cin >> *p;
	obj.e = *p;

	cout << obj.a << " " << obj.b << " " << obj.c << " " << obj.d << " "
			<< obj.e << endl;
	return 0;
}

/*definire una variante della funzione “scambia”
 che scambia i valori di due variabili utilizzando
 i puntatori e usarla all’interno del main*/

#include <iostream>
using namespace std;

typedef int *intpoint;

void scambia(int &x, int &y) {
	intpoint p = new int, q = new int;
	*p = x;
	*q = y;
	y = *p;
	x = *q;

}

int main() {

	int x, y;
	x = 10;
	y = 30;

	scambia(x, y);
	cout << "x: " << x << " y: " << y << endl;

	return 0;
}

/*ridefinire un algoritmo di ordinamento di array accedendo agli
 elementi attraverso puntatori*/

#include <iostream>
using namespace std;

typedef int *intpoint;

void bubblesort(int array[], int size) {

	int tmp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}
void bubblesortPoint(int array[], int size) {
	intpoint p = new int, q = new int;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				*p = array[j];
				*q = array[j + 1];
				array[j] = *q;
				array[j + 1] = *p;
			}
		}
	}
}

int main() {
	int a[10] = { 3, 4, 1, 8, 3, 9, 4, 90, 5, 2 };
	bubblesortPoint(a, 10);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}

	return 0;
}

/*scrivere un programma che crea una lista di lunghezza length
 (presa in input) i cui elementi sono numeri generati casualmente,
 li inserisce in una lista e poi:
 stampa la lista degli input
 stampa il valore più vicino alla media*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct node {
	int val;
	node *next;
};
typedef node* ptr_lista;

class list {
private:
	ptr_lista head;
	ptr_lista tail;
public:
	list() {
		head = NULL;
		tail = NULL;
	}
	void createnode(int value) {
		ptr_lista temp = new node;
		temp->val = value;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
			temp = NULL;
		} else {
			tail->next = temp;
			tail = temp;
		}
	}
	void insert_start(int value) {
		node *temp = new node;
		temp->val = value;
		temp->next = head;
		head = temp;
	}
	void createlist(int lenght) {

		int x = rand() % 20 + 1;
		int y;
		createnode(x);
		for (int i = 0; i < lenght; i++) {
			y = rand() % 20 + 1;
			insert_start(y);
		}
	}

	void display() {
		node *temp = new node;
		temp = head;
		while (temp != NULL) {
			cout << temp->val << "\t";
			temp = temp->next;
		}
	}
};

int main() {
	srand(time(NULL));
	list obj;
	obj.createlist(10);
	obj.display();

	return 0;
}

/*ASSEGNARE UN VALORE RANDOMICO A UNA VARIABILE*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void assignRandom(int x) {
	for (int i = 0; i < 10; i++) {
		x = rand() % 100;
		cout << x << " ";
	}
}

int main() {
	srand(time(NULL));
	int x = 0;
	assignRandom(x);
	return 0;
}

/*[NOT WORKING] scrivere un programma che prende in input interi
 dall’utente finchè l’utente non inserisce 0, poi prende
 un’ altro intero n e rimuove dalla lista tutti gli interi
 multipli di n, quindi stampa la lista*/

#include <iostream>
using namespace std;

struct node {
	int val;
	node *next;
};
typedef node *ptr_lista;

class List {
private:
	ptr_lista head;
	ptr_lista tail;
public:
	List() {
		head = NULL;
		tail = NULL;
	}

	void createNode(int value) {
		ptr_lista tmp = new node; //creazione nuovo nodo
		tmp->val = value;
		tmp->next = NULL;
		if (head == NULL) {  //controllo se la lista è vuota
			head = tmp;	//attacco la testa alla coda al nodo
			tmp = NULL;
		} else {	//attacco il nodo alla coda
			tail->next = tmp;
			tail = tmp;
		}
	}

	void deleteMultiple(int x) {
		ptr_lista current = new node;
		ptr_lista previous = new node;
		ptr_lista tmp = new node;
		ptr_lista tmp2 = new node;
		current = head;
		if ((current->val % x) == 0) { //deleting if at the head
			cout << "deleting head\n";
			tmp = head;
			head = head->next;
			current = head; // repointing current to head
			delete tmp;
		}
		while (current->next != NULL) { //going on till the end
			previous = current;
			current = current->next;
			if ((current->val % x) == 0) { //meanwhile trying to find one
				cout << "deleting in the middle\n";
				tmp2 = current;
				current = current->next;
				previous->next = current;
				delete tmp2;
			}
		}
		if ((current->next == NULL) && (tail->val % x) == 0) {
			cout << "deleting the tail\n";
			tail = previous;
			previous->next = NULL;
			delete current;
		}
	}
	void display() {
		ptr_lista tmp = new node;
		tmp = head;
		if (tmp == NULL) {
			cout << "list is empty\n";
		}
		while (tmp != NULL) {
			cout << tmp->val << "\t";
			tmp = tmp->next;
		}
	}
	void runningList() {
		int x = 0, y = 0;
		cout << "Inserire valore da inserire in lista: \n";
		cin >> x;
		while (x != 0) {
			createNode(x);
			cout << "Inserire valore da inserire in lista: \n";
			cin >> x;
		}
		cout << "Inserire numero di cui i multipli verranno eliminati: \n";
		cin >> y;
		deleteMultiple(y);
		display();

	}
};

int main() {

	List obj;
	obj.runningList();

	return 0;
}

/*Crivello di Eratostene*/
#include <iostream>
using namespace std;

struct node {
	int val;
	node* next;
};
typedef node* ptr_lista;

class List {
private:
	ptr_lista head, tail;

public:
	List() {
		head = NULL;
		tail = NULL;
	}

	void insertend(int i) {
		ptr_lista tmp = new node;
		tmp->val = i;
		tmp->next = NULL;
		if (head == NULL) {
			head = tmp;
			tail = tmp;
			tmp = NULL;
		} else {
			tail->next = tmp;
			tail = tmp;
			tmp = NULL;
		}
	}
	void crivello() {
		ptr_lista curr = new node;
		ptr_lista prec = new node;
		ptr_lista primo = new node;
		curr = head;
		prec = head;
		primo = head;
		while (primo->next != NULL) {
			curr = primo->next;
			prec = primo;
			while (curr != NULL) {
				if ((curr->val % primo->val) == 0
						&& (curr->val != primo->val)) {
					curr = curr->next;
					prec->next = curr;
				} else {
					curr = curr->next;
					prec = prec->next;
				}
			}
			primo = primo->next;
		}
	}

	void display() {
		node *temp = new node;
		temp = head;
		while (temp != NULL) {
			cout << temp->val << "\t";
			temp = temp->next;
		}
	}
};

int main() {

	List l;
	for (int i = 2; i < 51; i++) {
		l.insertend(i);
	}
	l.crivello();
	l.display();
	return 0;
}

/* funzione che inverte una stringa di caratteri che si conclude all'immissione di '.'*/
void revert() {
	char c;
	cin >> c;
	if (c != '.') {
		revert();
		cout << c;
	} else {
		cout << "\n la sequenza invertita e`: ";
	}
}

/*serie di esericizi su ricorsione*/
#include <iostream>
using namespace std;

void write_vertical(int n) {
	int tmp;
	if (n < 10) {
		cout << n << endl;
	} else {
		tmp = n / 10 * 10;
		cout << n - tmp << endl;
		write_vertical(n / 10);

	}
}
void writeQuadr(int n) {
	int tmp;
	if (n == 1) {
		cout << "* ";
	} else {
		writeQuadr(n - 1);
		tmp = n * n;
		for (int i = 0; i < tmp; i++) {

			cout << i + 1 << "* ";
		}

	}
}
int factorial(int n) {
	if (n == 1 || n == 0) {
		return 1;
	} else {
		return n * factorial(n - 1);

	}

}
int mcd(int m, int n) {
	if (m == n) {
		return m;
	} else if (m > n) {
		return mcd(m - n, n);
	} else {
		return mcd(m, n - m);
	}
}
int fib(int n) {
	if (n == 1 || n == 0) {
		return 1;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}
int f(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return n * n + f(n - 2);
	}
}
void revert() {
	char c;
	cin >> c;
	if (c != '.') {
		revert();
		cout << c;
	} else {
		cout << "\n la sequenza invertita e`: ";
	}
}

int main() {

	write_vertical(9375);
	writeQuadr(4);
	cout << factorial(0);
	cout << mcd(18, 12);
	cout << fib(4);
	cout << f(6);
	revert();
	return 0;
}

#include <iostream>
using namespace std;
/* creare un albero binario di interi positivi con la seguente forma
 la radice ha valore n, preso in input
 il figlio sinistro ha valore n/2 (se il risultato è 0 il figlio non
 esiste)
 il figlio destro ha valore n-2 (se il risultato è 0 o negativo il figlio
 non esiste)*/
struct btree {
	int val;
	btree* left;
	btree* right;
};
typedef btree* ptr_albero;
ptr_albero create(ptr_albero root, int val) {
	if (root == NULL) {
		root = new btree;
		root->val = val;
		root->left = NULL;
		root->right = NULL;
		if (val / 2 > 0) {
			root->left = create(root->left, (val / 2));
		} else {
			root->left = NULL;
		}
		if (val - 2 > 0) {
			root->right = create(root->right, (val - 2));
		} else {
			root->right = NULL;
		}
	}
	return root;
}
struct Trunk {
	Trunk *prev;
	string str;

	Trunk(Trunk *prev, string str) {
		this->prev = prev;
		this->str = str;
	}
};

// Helper function to print branches of the binary tree
void showTrunks(Trunk *p) {
	if (p == NULL)
		return;

	showTrunks(p->prev);

	cout << p->str;
}

// Recursive function to print binary tree
// It uses inorder traversal
void printTree(ptr_albero root, Trunk *prev, bool isLeft) {
	if (root == NULL)
		return;

	string prev_str = "    ";
	Trunk *trunk = new Trunk(prev, prev_str);

	printTree(root->left, trunk, true);

	if (!prev)
		trunk->str = "---";
	else if (isLeft) {
		trunk->str = ".---";
		prev_str = "   |";
	} else {
		trunk->str = "`---";
		prev->str = prev_str;
	}

	showTrunks(trunk);
	cout << root->val << endl;

	if (prev)
		prev->str = prev_str;
	trunk->str = "   |";

	printTree(root->right, trunk, false);
}
int main() {
	ptr_albero albero = NULL;
	printTree(create(albero, 10), NULL, false);

	return (0);
}

/*Si consideri la funzione f1 definita sotto tramite mutua ricorsione. Se ne
 dia una definizione ricorsiva senza mutua ricorsione. Se ne dia anche una definizione
 iterativa.
 int f2(int a);
 int f1(int a)
 { if (a<=0)
 return 0;
 return(1+f2(a-1));
 }
 int f2(int b)
 { return(2*f1(b-2)); }*/

#include <iostream>
using namespace std;

int f2(int b);
int f1(int a) {
	if (a <= 0) {
		return 0;
	} else {
		return (1 + f2(a - 1));
	}
}
int f2(int b) {
	return (2 * f1(b - 2));
}

int f12(int a) {
	if (a <= 0) {
		return 0;
	} else {
		return (1 + 2 * f12(a - 3));
	}
}

int main() {

	int x;
	cin >> x;
	cout << f1(x) << endl;
	cout << f12(x);
	return 0;
}

/*Funzione che prende in input un array di interi e restituisce il numero massimo di duplicati*/

#include <iostream>
using namespace std;

int max_dup(int a[6]) {
	int tmp_max = 0;
	int tmp = 1;
	for (int i = 0; i <= 5; i++) {
		for (int j = 1; j <= 6; j++) {
			if (a[i] == a[j]) {
				tmp++;
			}
		}
		if (tmp > tmp_max) {
			tmp_max = tmp;
		}
		tmp = 0;
	}
	return tmp_max;
}



int main(){
	
	
	int a[] = { 7,8,7,7,7,0,8 };

	cout << max_dup(a);

	return 0;
}

/* Scrivere una funzione che legge un numero binario da
tastiera e lo stampa in decimale */

#include <iostream>
using namespace std;

void binToDecwithArray() {
	int bin[4];
	int dec = 0;
	for (int i = 0; i < 4; i++) {
		cin >> bin[i];
	}
	int p = 0;
	for (int j = 3; j >= 0; j--) {
		dec = dec + (bin[j] * pow(2, p));
		p++;
	}
	cout << dec;

}

void BinToDec() {
	int bin = 0;
	int dec = 0;
	int esp = 0;
	cin >> bin;
	while (bin >= 1) {
		dec = dec + (bin % 10) * pow(2, esp);
		bin = bin / 10;
		esp++;
	}
	cout << dec;
}

int main() {

	binToDecwithArray();
	BinToDec();


	return 0;
}

/*scrivere una funzione che legge due numeri binari da
tastiera e ne stampa la somma e il prodotto(sempre in
	binario)*/

#include <iostream>
using namespace std;

void somma() {
	int x = 0;
	int y = 0;
	int riporto = 0;
	int least_x = 0;
	int least_y = 0;
	int ris[8] = {0,0,0,0,0,0,0,0};
	cin >> x;
	cin >> y;
	int iteration = 0;
	while ( x >= 1 || y >= 1) {
		least_x = x % 10;
		least_y = y % 10;
		if ((least_x + least_y + riporto) == 3) {
			ris[iteration] = 1;
			riporto = 1;
		}
		else if ((least_x + least_y + riporto) == 2) {
			ris[iteration] = 0;
			riporto = 1;
		}
		else if ((least_x + least_y + riporto) == 1) {
			ris[iteration] = 1;
			riporto = 0;
		}
		else if ((least_x + least_y + riporto) == 0) {
			ris[iteration] = 0;
			riporto = 0;
		}
		x = x / 10;
		y = y / 10;
		iteration++;
	}
	if (riporto == 1) {
		ris[iteration] = 1;
	}
	for (int i = 7; i >= 0; i--) {
		cout << ris[i];
	}
}

void moltiplicazione() {

}

int main() {

	somma();

	return 0;
}

/*scrivere una funzione che prende in input un intero(la
	cui cifra meno significativa è diversa da 0) e stampa
	l’intero con le cifre invertite*/

#include <iostream>
using namespace std;

int invertito(int n) {
	if (n % 10 == 0) {
		cout << "ERROR: Number must not finish with 0.";
		exit(1);
	}
	int new_n = 0;
	while (n > 0) {
		new_n = (new_n * 10) + (n % 10);
		n = n / 10;
	}
	return new_n;
}

int main() {
	int n;
	cin >> n;

	cout<<invertito(n);
	
	return 0;
}

/*ESERCIZIO 2 PAG 329*/
#include <iostream>
using namespace std;


int main() {
	char continu = 'c';
	do {
		int current_time[2], waiting_time[2], result[2] = { 0,0 };
		cout << "Set current time.\nHours:\n";
		cin >> current_time[0];
		cout << "Minutes:\n";
		cin >> current_time[1];
		cout << "Set waiting time.\nHours:\n";
		cin >> waiting_time[0];
		cout << "Minutes:\n";
		cin >> waiting_time[1];

		if (current_time[0] > 23 || current_time[1] > 59) {
			cout << "ERROR: Current time is set on invalid values.\n\n";
		}
		else if (waiting_time[1] > 59) {
			cout << "ERROR: Waiting time is set on invalid values.\n\n";
		}
		else {
			result[1] = current_time[1] + waiting_time[1];
			while (result[1] > 59) {
				result[1] = result[1] - 60;
				result[0]++;
			}
			result[0] = result[0] + current_time[0] + waiting_time[0];
			cout << "After waiting, time will be: " << result[0] << ":" << result[1] << endl << "Press 'C' if you want to continue\n";
			cin >> continu;
		}
	} while (continu == 'c' || continu == 'C');

	return 0;
}

/*Scrivere una funzione che concatena due stringhe, mettendo
il risultato nella prima*/
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <cstring>
using namespace std;

void concatenate(char a[], char b[]) {
	int i = 0;
	while (a[i] != '\0') {
		i++;		
	}
	if (((i - 1) + strlen(b)) >= 21) {
		cout << "ERROR: Second string too long to fit in string 1.\n";
		exit(1);
	}
	a[i] = NULL;
	strncat(a, b, (20 - i));
}

int main() {

	// Dichiarazione e input dei valori
	char a[21], b[11];
	cout << "Input first string. (Max. 20 characters)\n";
	cin.getline(a, 21);
	cout << "Input second string. (Max. 10 characters)\n";
	cin.getline(b, 11);

	// Svolgimento
	concatenate(a, b);
	int i = 0;
	while (a[i] != '\0'){
		cout << a[i];
		i++;
	}

	return 0;
}

/*Scrivere una funzione che elimina da una stringa tutti i
caratteri dopo l'ennesimo*/

#include <iostream>
#include <cstring>
using namespace std;

void canc(char a[], int n) {
	for (int i = 0; i < strlen(a); i++) {
		if (i >= n) {
			a[i] = '\0';
		}
	}
}

int main() {
	int n = 0;
	char a[10];
	cout << "Inserisci stringa:\n";
	cin.getline(a, 10);
	cout << "Inserisci numero dopo il quale tagliare:\n";
	cin >> n;
	canc(a, n);
	for (int i = 0; i < strlen(a); i++) {
		cout << a[i];
	}


	return 0;
}
/*Scrivere una funzione che prende tre stringhe e stampa la più lunga NON ACCETTA STRINGHE DELLA STESSA DIMENSIONE*/

#include <iostream>
#include <cstring>
using namespace std;

void longest(char a[], char b[], char c[]) {
	if (strlen(a) > strlen(b)) {
		if (strlen(a) > strlen(c)) {
			for (int i = 0; i < strlen(a); i++) {
				cout << a[i];
			}
		} else {
			for (int i = 0; i < strlen(c); i++) {
				cout << c[i];
			}
		}
	} else{
		if (strlen(b) > strlen(c)) {
			for (int i = 0; i < strlen(b); i++) {
				cout << b[i];
			}
		} else {
			for (int i = 0; i < strlen(c); i++) {
				cout << c[i];
			}
		}
	}
}

int main() {

	char a[10], b[10], c[10];
	cout << "Inserisci stringa 1:\n";
	cin.getline(a, 10);
	cout << "Inserisci stringa 2:\n";
	cin.getline(b, 10);
	cout << "Inserisci stringa 3:\n\n";
	cin.getline(c, 10);
	longest(a, b, c);
	return 0;
}

/*Scrivere una funzione che prende in input una stringa s e la sua
lunghezza e ritorna true se contiene le sottostringe "gh" o "ch"
oppure false in caso contrario. [esame 02/2018]*/

#include <iostream>
#include <cstring>
using namespace std;

bool ghch(char s[], int lunghezza) {
	bool result = false;
	for (int i = 0; i < lunghezza; i++) {
		if (s[i] == 'g' || s[i] == 'c') {
			if (s[i + 1] == 'h') {
				result = true;
			}
		}
	}
	return result;
}

int main() {
	char s[10];
	int len = 0;
	cin.getline(s, 10);
	len = strlen(s);
	if (ghch(s, len)) {
		cout << "yes";
	} else {
		cout << "no";
	}
	return 0;
}

/*Definire una funzione
void parola(char str[], char c, char dest[])
che prende come parametri una stringa str e un carattere c e
restituisce nel parametro dest la stringa corrispondente alla prima
parola dentro str che inizia per c se presente.Si assuma che una
parola sia una qualunque sequenza di caratteri diversi da spazio e che
le parole siano separate tra loro da uno o più spazi.*/

#include <iostream>
#include <cstring>
using namespace std;

void parole(char str[], char c, char dest[]) {
	bool found = false;
	int i = 0, j = 0;
	while (!found) {
		if (str[i] == ' ' && str[i + 1] == c) {
			i++;
			found = true;
			while (i != ' ' || i < strlen(str)) {
				dest[j] = str[i];
				i++;
				j++;
			}
		}
		i++;
		
	}
}

int main() {
	char str[20];
	char c = 'c';
	char dest[15] = {'0'};
	cout << "Inserisci testo:\n";
	cin.getline(str, 20);
	parole(str, c, dest);
	for (int i = 0; i < strlen(dest); i++) {
		cout << dest[i];
	}

	return 0;
}

/*scrivere un programma che definisce una struct studente, chiede all'utente di
inserire i dati di uno studente e stampa poi il nome dello studente e la media dei
suoi voti*/

#include <iostream>
#include <cstring>
using namespace std;

struct studente {
	char nome[15] = {NULL};
	char cognome[15] = {NULL};
	int voti[10];
};

studente data_input(studente s) {
	cout << "Inserire nome:\n";
	cin.getline(s.nome, 15);
	cout << "Inserire cognome:\n";
	cin.getline(s.cognome, 15);
	cout << "Inserire voti:\n";
	for (int i = 0; i < 10; i++) {
		cin >> s.voti[i];
	}
	return s;
}

void data_output(studente s) {
	cout << endl << endl;
	for (int i = 0; i < strlen(s.nome); i++) {
		cout << s.nome[i];
	}
	cout << "\t";
	for (int i = 0; i < strlen(s.cognome); i++) {
		cout << s.cognome[i];
	}
	cout << "\nMedia voti:\t";
	int tot = 0;
	int media = 0;
	for (int i = 0; i < 10; i++) {
		tot = tot + s.voti[i];
	}
	media = tot / 10;
	cout << media;
}

int main() {

	studente s;
	s = data_input(s);
	data_output(s);

	return 0;
}

/*scrivere un programma che definisce una struttura giorno dell'anno, chiede
all'utente di inserire un giorno e calcola quanti giorni sono passati dall'inizio
dell'anno*/

#include <iostream>
using namespace std;

struct giorno {
	int mese = 0;
	int giorno = 0;
};

void calculateshit(giorno g) {
	cout << "Insert day of the month:\n";
	cin >> g.giorno;
	cout << "Insert month:\n";
	cin >> g.mese;
	int days = 0;
	g.mese--;
	while (g.mese >= 1) {
		if (g.mese == 2) {
			days = days + 28;
		} else if (g.mese == 11 || g.mese == 9 || g.mese == 6 || g.mese == 4) {
			days = days + 30;
		} else {
			days = days + 31;
		}
		g.mese--;
	}
	days = days + g.giorno;
	cout << endl<< days;
}

int main(){
	giorno g;
	calculateshit(g);

	return 0;
}
	
/*definire una variabile di tipo intero, incrementarla due volte attraverso due
puntatori distinti e stampare il risultato*/

#include <iostream>
using namespace std;

int main(){

	int variable = 10;
	int *p = &variable;
	*p = *p + 1;
	int *q = &variable;
	*q = *q + 1;
	cout << variable;

	return 0;
}

/*allocare una variabile di tipo intero, incrementarla attraverso puntatore,
stampare il risultato e deallocarla*/

#include <iostream>
using namespace std;

int main() {
	int variable = 10;
	int *p = &variable;
	*p = *p + 1;
	cout << *p;
	delete p;
	p = NULL;
}

/*prendere in input 10 interi e memorizzarli in un array di 10 interi
utilizzando i puntatori (le lhs degli assegnamenti sono sempre operazioni
*p). Poi stampare i valori*/

#include <iostream>
using namespace std;

int main() {
	int a[10];
	int *p = NULL;
	for (int i = 0; i < 10; i++) {
		p = &a[i];
		cin >> *p;
	}
	cout << endl << endl;
	for (int i = 0; i < 10; i++) {
		cout << a[i] <<"\t";
	}

	return 0;
}

/*definire una struttura di 5 campi interi e memorizzarci 5 interi presi in
input utilizzando i puntatori (le lhs degli assegnamenti sono sempre
operazioni *p). Poi stamparl'ultimo valore*/

#include <iostream>
using namespace std;

struct numbers {
	int a, b, c, d, e;
};

int main() {
	numbers n;
	int *p = NULL;
	p = &n.a;
	cin >> *p;
	p = &n.b;
	cin >> *p;
	p = &n.c;
	cin >> *p;
	p = &n.d;
	cin >> *p;
	p = &n.e;
	cin >> *p;

	cout << *p;

	return 0;
}

/*definire una variante della funzione “scambia” che scambia i valori di due
variabili utilizzando i puntatori e usarla all’interno del main*/

#include <iostream>
using namespace std;

void scambia(int *p, int *q) {
	int t;
	t = *p;
	*p = *q;
	*q = t;

}

int main() {

	int a = 8, b = 13;
	int *p, *q;
	p = &a;
	q = &b;
	cout << a<< "  "<< b<<endl;
	scambia (p, q);
	cout << a<< "  "<< b<<endl;

	return 0;
}

/* ridefinire un algoritmo di ordinamento di array accedendo agli
elementi attraverso puntatori*/

#include <iostream>
using namespace std;

void bubblesortPointers(int a[]) {
	int* p = NULL, * q = NULL, temp = 0;
	cout << "Bubblesorting...\n";
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			p = &a[j];
			q = &a[j+1];
			if (*p > * q) {
				temp = *p;
				*p = *q;
				*q = temp;
			}
		}
	}

}

int main() {
	int a[10];
	cout << "Insert 10 numbers:\n";
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	bubblesortPointers(a);
	cout << "Printing results:\n";
	for (int i = 0; i < 10; i++) {
		cout << a[i] << "\t";
	}
}

/*funzione che prende in input dividendo e divisore, e
restituisce quoziente e resto*/

#include <iostream>
using namespace std;

void division(int dvd, int dvs, int *q, int *r){
 *q = dvd / dvs ;
 *r = dvd % dvs;
}
int main(){
 int quot, rem;
 division(10, 3, &quot, &rem);
cout << quot <<" "<< rem ;
return(0) ;
}

/*
1. Scrivere una funzione che prende una lista di interi e stampa la
sequenza di interi memorizzata nella lista
2. Scrivere una funzione che crea una lista di lunghezza length (presa in
input) i cui elementi sono numeri generati casualmente e ritorna il
puntatore alla testa.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct node {
	int val;
	node *next;
}; typedef node *ptr_list;

ptr_list randomlist(int lenght){
	srand(time(NULL));
	ptr_list head = new node;
	head->val = (rand() %100) +1;
	head->next = NULL;
	for (int i = 0; i < lenght-1; i++){
		srand(time(NULL)*i);
		ptr_list tmp = new node;
		tmp->val = (rand() %100) +1;
		tmp->next = head;
		head = tmp;
	}
	return head;
}

void stampalist(ptr_list head){
	ptr_list tmp = new node;
	tmp = head;
	while (tmp->next != NULL){
		cout << tmp->val<< " -> ";
		tmp = tmp->next;
	}
	cout <<tmp->val;
}

int main() {
	int lenght = 0;
	cin>>lenght;
	stampalist(randomlist(lenght));

	return 0;
}

/*scrivere un programma che prende una lista di interi e stampa il
valore più vicino alla media*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct node {
	int val;
	node *next;
};
typedef node* ptr_list;

int media(ptr_list head) {
	ptr_list tmp = new node;
	int somma = 0, iteration = 0, media = 0;
	tmp = head;
	while (tmp != NULL) {
		somma = somma + tmp->val;
		tmp = tmp->next;
		iteration ++;
	}
	media = somma / iteration;
	return media;
}


ptr_list randomlist(int lenght){
	srand(time(NULL));
	ptr_list head = new node;
	head->val = (rand() %100) +1;
	head->next = NULL;
	for (int i = 0; i < lenght-1; i++){
		srand(time(NULL)*i);
		ptr_list tmp = new node;
		tmp->val = (rand() %10) +1;
		tmp->next = head;
		head = tmp;
	}
	return head;
}
void stampalist(ptr_list head){
	ptr_list tmp = new node;
	tmp = head;
	while (tmp->next != NULL){
		cout << tmp->val<< " -> ";
		tmp = tmp->next;
	}
	cout <<tmp->val;
}
int main() {
	ptr_list head = randomlist(4);
	stampalist(head);
	cout << endl<<media(head);
	return 0;
}

/*scrivere una funzione che inverte i nodi di una lista e ritorna il
pntatore alla testa della nuova lista. */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct node {
	int val;
	node *next;
};
typedef node* ptr_list;

ptr_list reverselist(ptr_list head) {
	ptr_list current = head;
	ptr_list prev = NULL, next = NULL;

	while (current != NULL) {
		next = current -> next;
		current->next = prev;

		prev = current;
		current = next;
	}
	head = prev;
	return head;
}
void stampalist(ptr_list head){
	ptr_list tmp = new node;
	tmp = head;
	while (tmp->next != NULL){
		cout << tmp->val<< " -> ";
		tmp = tmp->next;
	}
	cout <<tmp->val<<endl;
}
ptr_list randomlist(int lenght){
	srand(time(NULL));
	ptr_list head = new node;
	head->val = (rand() %100) +1;
	head->next = NULL;
	for (int i = 0; i < lenght-1; i++){
		ptr_list tmp = new node;
		tmp->val = (rand() %100) +1;
		tmp->next = head;
		head = tmp;
	}
	return head;
}

int main() {
	ptr_list head = randomlist(20);
	stampalist(head);
	stampalist(reverselist(head));

	return 0;
}

/*prendere in input caratteri e creare una lista bidirezionale
che li contenga. Stampare i caratteri inseriti in ordine
inverso e in ordine normale*/

#include <iostream>
using namespace std;

struct node {
	char c;
	node *prev;
	node *next;
};
typedef node* ptr_list;

ptr_list createList(int lenght) {
	ptr_list head = new node;
	ptr_list tail = new node;
	cout<<"Insert character:\n";
	cin >> head->c;
	head->prev = NULL;
	head->next = NULL;
	tail = head;
	while (lenght-1 > 0){
		ptr_list tmp = new node;
		cout<<"Insert character:\n";
		cin >> tmp->c;
		tmp->next = head;
		tmp->prev = NULL;
		head->prev = tmp;
		head = tmp;
		lenght--;
	}
	return head;
}

void stampaBiList(ptr_list head) {
	ptr_list tmp = new node;


	if (head == NULL){
		cout << "List is Empty.\n";
	} else {
		cout << "From Head to Tail:\n";
		tmp = head;
		while (tmp->next != NULL){
			cout << tmp->c<< " -> ";
			tmp = tmp->next;
		}
		cout << tmp->c << endl;

		cout <<"From Tail to Head:\n";
		while (tmp->prev != NULL) {
			cout << tmp->c << " -> ";
			tmp = tmp->prev;
		}
		cout << tmp->c <<endl;
	}
}

int main() {

	ptr_list head = new node;
	head = createList(6);
	stampaBiList(head);

	return 0;
}

/*scrivere una funzione ricorsiva che prende n e stampa n
asterischi*/

#include <iostream>
using namespace std;

void asterischi(int n){
	if (n == 1){
		cout<<"*";
	} else {
		cout<<"*";
		asterischi(n-1);
	}
}

int main() {
	asterischi(30);
	return 0;
}


/*scrivere write_vertical in maniera che le cifre
sono stampate dalla meno significativa alla più significativa*/

#include <iostream>
using namespace std;

void write_vertical(int n){
	if (n<=9){
		cout<<n<<endl;
	} else {
		cout <<n%10<<endl;
		write_vertical(n/10);
	}
}

int main() {
	write_vertical(6529);
	return 0;
}

/*scrivere una funzione ricorsiva che prende n e stampa
un numero di asterischi uguale alla somma dei quadrati
dei primi n numeri naturali
 */

#include <iostream>
using namespace std;

void asterischiquad(int n){
	if (n == 1){
		cout<<"*"<<endl;

	} else {
		asterischiquad(n-1);
		for (int i = 0; i<n*n; i++){
				cout<<"*";
		}
		cout<<endl;
	}
}

int main() {
	asterischiquad(5);
	return 0;
}

/*
calcolare la seguente funzione
f(n) = n * n + f(n-2)
f(1) = 1
f(0) = 0
 */

#include <iostream>
using namespace std;

int foo(int n) {
	if (n == 0){
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return (n*n + foo(n-2));
	}
}

int main(){
	cout<< foo (4);
	return 0;
}

/*definire una classe frazione con un opportuno
costruttore ed i metodi stampa, moltiplica e
inverso
il metodo moltiplica prende come parametri due frazioni
e mette il risultato nella frazione su cui è invocato
il metodo inverso inverte la frazione su cui è invocato*/

#include <iostream>
using namespace std;

class Frazione {
protected:
	int numeratore;
	int denominatore;
public:
	Frazione (double x, double y){
		numeratore = x;
		denominatore = y;
	}

	void stampa() {
		if (numeratore == 0 && denominatore == 0) {
			cout<<"Frazione indeterminata.\n";
		} else if (denominatore == 0) {
			cout<<"Frazione impossibile.\n";
		} else {
			cout<< numeratore / (double)denominatore;
		}
	}
	
	void moltiplicazione (Frazione b) {
		numeratore = numeratore * b.numeratore;
		denominatore = denominatore * b.denominatore;
	}
	
	void invert() {
		int tmp;
		tmp = numeratore;
		numeratore = denominatore;
		denominatore = tmp;
	}
};


int main() {
	Frazione F(6, 8);
	F.stampa();

	return 0;
}

//classe abitazione con sottoclassi appartamento e villetta

#include <iostream>
using namespace std;

class abitazione{
protected:
	int stanze;
	int m_quad;
public:
	abitazione(int x, int y){
		stanze = x;
		m_quad = y;
	}

	int costo(int xmetro) {
		return (xmetro * m_quad);
	}
};

class appartamento : public abitazione{
protected:
	int piano;
public:
	appartamento(int x, int y, int z) : abitazione (x, y){
		piano = z;
	}
};

class villetta : public abitazione{
public:
	villetta (int x, int y) : abitazione(x, y){ }

	int costo (int xmetro){
		return (abitazione::costo(xmetro)*1.10);
	}
};

int main() {
	abitazione a(5, 100);
	villetta b(5, 100);
	int xmetro = 5000;
	cout<<a.costo(xmetro)<<endl;
	cout<<b.costo(xmetro)<<endl;
}


/*definire una classe contoBanca con un saldo e metodi
versa e preleva. Definire una sottoclasse
contoInteressi con un metodo addizionale che
aumenta il saldo del 2%.*/

#include <iostream>
using namespace std;

class contoBanca {
protected:
	double saldo;
public:
	contoBanca(double x){
		saldo = x;
	}

	void preleva(double prelievo){
		if(prelievo <= saldo){
			saldo -= prelievo;
			cout<<"Prelievo eseguito.\n";
			if (saldo == 0){
				cout<<"ATTENZIONE: il saldo è ora nullo.\n";
			}
		} else {
			cout<<"Credito insufficiente.\n";
		}

	}

	void versa(double versamento){
		saldo += versamento;
		cout<<"versamento eseguito.\n";
	}
};

class contoInteressi : public contoBanca{
public:
	contoInteressi(double x) : contoBanca(x){

	}
	void applicaInteressi(){
		saldo = saldo*1.02;
	}

};

int main() {
	contoInteressi conto(9000);

	conto.applicaInteressi();
	conto.preleva(9020);

	return 0;
}

/*Classe Giocatore:
 	 -Nome
 	 -Gol Fatti
 	 -squadra:
 	 	 nome
 	 	 scudetti vinti
 Sotto Classe Portiere:
 	 -Gol subiti
 */

#include <iostream>
#include <cstring>
using namespace std;

class Giocatore {
protected:
	char nome[40];
	int goals;
	struct squadra {
				char nome[20];
				int scudetti;
			};
public:
	Giocatore(char str[], int x, char str2[], int y) {
		strcpy(nome, str);
		goals = x;
		strcpy(squadra::nome, str2);
		squadra::scudetti = y;
	}
	
	bool isloser(){
		if (squadra::scudetti == 0){
			return true;
		}
		return false;
	}
	
	void addgoal(int n) {
		goals += n;
	}
};

class Portiere : public Giocatore {
protected:
	int goalsreceived;
public:
	Portiere (char str[], int x, char str2[], int y, int z): Giocatore(str, x, str2, y){
		goalsreceived = z;
	}
	
	void addgoalreceived(int n) {
		goalsreceived += n;
	}
};

/*scrivere una funzione ricorsiva che
prende in input un albero binario e restituisce il
numero di nodi in esso*/

#include <iostream>
using namespace std;

struct btree{
	int val;
	btree *ltree;
	btree *rtree;
};
typedef btree* ptr_btree;


int nodi(ptr_btree t){
	if (t == NULL){
		return 0;
	} else if (t->ltree == 0 && t->rtree == 0) {
		return 1;
	} else {
		return (1 + nodi(t->ltree)+nodi(t->rtree));
	}

}

ptr_btree newNode(int val)
{
    ptr_btree node = new btree;
    node->val = val;
    node->ltree = node->rtree = NULL;
    return (node);
}

int main() {
	ptr_btree root = newNode(2);
	root->ltree = newNode(7);
	root->rtree = newNode(5);
	root->ltree->rtree = newNode(6);
	root->ltree->rtree->ltree = newNode(1);
	root->ltree->rtree->rtree = newNode(11);
	root->rtree->rtree = newNode(9);
	root->rtree->rtree->ltree = newNode(4);

	cout << nodi(root);

	return 0;
}

/*concatena due liste di interi*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct lista_di_interi {
	int val;
	lista_di_interi *next;
};
typedef lista_di_interi* ptr_list;

void stampalist(ptr_list head){
	ptr_list tmp = new lista_di_interi;
	tmp = head;
	while (tmp->next != NULL){
		cout << tmp->val<< " -> ";
		tmp = tmp->next;
	}
	cout <<tmp->val<<endl;
}
ptr_list randomlist(int lenght){
	srand(time(NULL));
	ptr_list head = new lista_di_interi;
	head->val = (rand() %10) +1;
	head->next = NULL;
	for (int i = 0; i < lenght-1; i++){
		ptr_list tmp = new lista_di_interi ;
		tmp->val = (rand() %10) +1;
		tmp->next = head;
		head = tmp;
	}
	return head;
}

ptr_list concatena_it(ptr_list head1, ptr_list head2) {
	if (head1 == NULL && head2 == NULL){
		cout <<"Both lists are empty.\n";
		return NULL;
	} else if (head1 == NULL) {
		return head2;
	} else if (head2 == NULL) {
		return head1;
	} else {
		ptr_list tmp = head1;
		while (tmp->next != NULL){
			tmp = tmp->next;
		}
		tmp->next = head2;
		return head1;
	}
}


int main() {
	ptr_list head1 = randomlist(6);
	ptr_list head2 = randomlist(8);
	stampalist(head1);
	stampalist(head2);

	head1 = concatena_it(head1, head2);
	stampalist(head1);

	return 0;
}

/*Programma per calcolare a quanto ammonta la durata di vari film*/
#include <iostream>
using namespace std;

void aggiungifilm(int &durataore, int &durataminuti){
	int ore, minuti;

	cout <<"Inserisci ore:\n";
	cin>>ore;
	cout<<"Inserisci minuti\n";
	cin>>minuti;

	durataore += ore;
	durataminuti += minuti;
	if (durataminuti >=60){
		durataore++;
		durataminuti -= 60;
	}
}

void displaytotal(int durataore, int durataminuti){
	cout<<"Totale:\n"<<durataore<<"h\ "<<durataminuti<<"m\n";
}

int main() {
	int durataore = 0;
	int durataminuti = 0;
	char cont1nue = 'n';
	do {
		aggiungifilm(durataore, durataminuti);
		cout<<"Do you want to continue (y/n)\n";
		cin >> cont1nue;
	}while(cont1nue == 'y');
	displaytotal(durataore, durataminuti);


	return 0;
}


int better_factorial(int n, int res){
	if(n <= 1){
		return res;
	} else {
		return better_factorial(n - 1, n * res);
	}
}
