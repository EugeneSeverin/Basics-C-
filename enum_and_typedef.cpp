// Enum and Typedef

// Departments:
//              CS - 1
//              ECE - 2
//              IT - 3
//              Civil - 4


// Shapes
//              Clubs - 1
//              Spades - 2
//              Diamonds - 3
//              Hearts - 4


// Typedef

typedef int marks;

typedef int rollno;


int main(){

//    Manual method

//    const int cs = 1; 
//    const int ece = 2;


// Enum method


    enum departments {CS, ECE, IT, Civil};

    enum shapes {clubs = 1, spadec, diamonds, hearts};

    // No typedef

    // int m1, m2, m3, r1, r2, r3;

    // typedef 

    marks m1, m2, m3;

    rollno r1, r2, r3;

    return 0;

}

