#include <iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include <ctime>
#include <vector>


using namespace std;

void Menu();

class akun {
private:
    string nama;
protected:
    string uname;
public:
    void setNama(string Nama){
    nama = Nama;
    }
    string getNama(){
        return nama;
    }
    akun (string Nama){
    nama = Nama;
    }
    akun() {
        system("color E0");
        cout << "\n\tWhat is your name? ";
        cin >> nama;
        system("cls");
        Menu();
    }
    ~akun(){}
};

class menuKategori{
protected:
    static double harga;
    static double hargaAddOn;
    static int day;
public:
void kategori(){
    int pilihKategori;
    int pilihKategoriList;

    cout << "\n\n\tChoose Category :" << endl;
    cout << "\t1. Enhancements - Acrylics" << endl;
    cout << "\t2. Enhancements - SNS or Ombre" << endl;
    cout << "\t3. Enhancements - UV Gel" << endl;
    cout << "\t4. Enhancements - Gel powder" << endl;
    cout << "\t5. billills and Repairs" << endl;
    cout << "\t6. Manicures" << endl;
    cout << "\t7. Pedicures" << endl;
    cout << "\t8. Take off only" << endl;
    cout << "\n\tChoose Menu: ";
    cin >> pilihKategori;
    system("cls");

    if(pilihKategori == 1){
        vector<string> kategoriList = {"Acrylic Fullset with tips", "Acrylic Overlay with Shellac", "Ombre Fullset - Short Length"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 672000;
            cout << "\n\n\t1 hour 15 minutes @ Rp 672.000\n" << endl;
            cout << "\tDescription: Cuticle work, Extensions, file, buff and polish. This is for the connoisseur of\n"
            << "\tenhancements. The powder is sustainable and will leave you feeling glamorous.\n"
            << "\tThis will give your nail a short durable length. Add some length for a little more\n"
            << "\tin the drop down! Sculpturing is available for £10 more." << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 821000;
            cout << "\n\n\t1 hour 25 minutes @ Rp 821.000\n" << endl;
            cout <<  "\tDescription: Cuticle work, Extensions, file, buff and Gel polish. In addition to your beautiful and\n"
            << "\tdurable set of nails you can treat yourself to a long lasting shellac coating and a\n"
            << "\tseductive shine! Add some length for a little more in the drop down! Sculpturing is\n"
            << "\tavailable in-store for £10 more." << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 672000;
            cout << "\n\n\t1 hour 10 minutes  @ Rp 672.000\n" << endl;
            cout <<  "\tDescription: Tired of your nails breaking all the time but long nails are not for you? With this\n"
            << "\ttreatment your problems are over! With a layer of acrylic on your natural nails and if\n"
            << "\tyou want that shiny look to stay for longer opt for our range of shellac colours! It's\n"
            << "\tinstant drying!." << endl;
        }
        else if (pilihKategoriList == 4){
            harga = 544000;
            cout << "\n\n\t1 hour  @ Rp 544.000\n" << endl;
            cout <<  "\tDescription: Cuticle work, file, buff, overlay and polish. Tired of having long nails and dealing with\n"
            << "\tbroken nails in the week due to your hands on schedule? Your problems are over with\n"
            << "\tan acrylic overlay! Our technician will apply a layer of acrylic to your natural nails to\n"
            << "\tgive it a strong firm base and then apply your chosen favourite varnish." << endl;
        }
     }

     else if(pilihKategori == 2){
        vector<string> kategoriList = {"Ombre Fullset - Short Length", "SNS Manicure", "SNS Fullset with Tips (short length)"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 544000;
            cout << "\n\n\t1 hour  @ Rp 544.000\n" << endl;
            cout <<  "\tDescription: The latest trend for french manicure. Long lasting. and non-chipping!" << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 821000;
            cout << "\n\n\t1 hour  @ Rp 821.000\n" << endl;
            cout <<  "\tDescription: We're proud to be one very very few places to do this! It's the only nail product that has\n"
            << "\ta Vitamin E and Calcium built into the product. The Calcium penetrates the nail bed\n"
            << "\tand the Vitamin E strengthens your natural nails whilst leaving a long lasting effect." << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 935000;
            cout << "\n\n\t2 hours  @ Rp 935.000\n" << endl;
            cout <<  "\tDescription: We're proud to be one very very few places to do this! It's the only nail product that has\n"
            << "\ta Vitamin E and Calcium built into the product. The Calcium penetrates the nail bed\n"
            << "\tand the Vitamin E strengthens your natural nails whilst leaving a long lasting effect.\n"
            << "\tAdd a little length to your nails! SNS is the perfect product to nourish your nails while\n"
            << "\tshowing off your new manicure!" << endl;
        }
     }

     else if(pilihKategori == 3){
        vector<string> kategoriList = {"UV Gel Fullset - Short Length", "UV Gel Fullset & Shellac - Short Length", "UV Gel Overlay", "UV Gel Overlay & Shellac"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 935000;
            cout << "\n\n\t2 hours  @ Rp 935.000\n" << endl;
            cout <<  "\tDescription: Cuticle work, Extensions, file, buff and polish. UV Gel is the perfect alternative to\n"
            << "\tacrylic! Lighter, more flexible and odourless! The finish can be crystal clear if you want\n"
            << "\tthat special look or we will paint any polish of your choice. Gorgeous as gloss, lasting"
            << "\tlike diamonds. Sculpturing is available instore for £10 more. Please note that this is\n"
            << "\tNOT PollyGel which we will not work on." << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 1247000;
            cout << "\n\n\t2 hours 15 minutes  @ Rp 1.247.000\n" << endl;
            cout <<  "\tDescription: Cuticle work, Extensions, file, buff and polish. UV Gel is the perfect alternative to\n"
            << "\tacrylic! Lighter, more flexible and odourless! The finish can be crystal clear if you want\n"
            << "\tthat special look or Choose Shellac for that long lasting shine that you're looking for!\n"
            << "\tYour gel polish will last until your next billills! Gorgeous as gloss, lasting like diamonds\n"
            << "\tPlease note that this is NOT PollyGel which we will not work on." << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 899000;
            cout << "\n\n\t1 hour 30 minutes  @ Rp 899.000\n" << endl;
            cout <<  "\tDescription: UV Gel is the perfect alternative to acrylic! Lighter, more flexible and odourless!\n"
            << "\tA layer on your natural nails can make them durable and glossy just like you want them!\n"
            << "\tPlease note that this is NOT PollyGel which we will not work on." << endl;
        }
        else if (pilihKategoriList == 4){
            harga = 1101000;
            cout << "\n\n\t1 hour 40 minutes  @ Rp 1.101.000\n" << endl;
            cout <<  "\tDescription: UV Gel is the perfect alternative to acrylic! Lighter, more flexible and odourless! A layer\n"
            << "\ton your natural nails can make them durable and glossy just like you want them!\n"
            << "\tChoose Shellac for that long lasting shine that you're looking for! Your gel polish will\n"
            << "\tlast until your next billills! You can add gel polish for a few pounds more if you want a\n"
            << "\tmore glossy finish. Please note that this is NOT PollyGel which we will not work on." << endl;
        }
     }

     else if(pilihKategori == 4){
        vector<string> kategoriList = {"Gel Powder Fullset with tips - Short Length", "Gel Powder Fullset with tips & Shellac - Short Length", "Gel Powder Overlay", "Gel Powder Overlay & Shellac"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 907000;
            cout << "\n\n\t1 hour 15 minutes  @ Rp 907.000\n" << endl;
            cout <<  "\tCuticle work, Extensions, file, buff and polish. It will strengthen and lengthen\n"
            << "\tyour nails but with a transparent finish which is ideal for light colors or french manicures.\n"
            << "\tWhy not opt for gel polish to give you that longer-lasting durable finish!" << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 1101000;
            cout << "\n\n\t1 hour 25 minutes  @ Rp 1.101.000\n" << endl;
            cout <<  "\tCuticle work, Extensions, file, buff and Gel polish. In addition to your beautiful\n"
            << "\tand durable set of Gel Powder nails, you can treat yourself to a long-lasting shellac\n"
            << "\tcoating and a seductive shine!" << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 821000;
            cout << "\n\n\t1 hour  @ Rp 821.000\n" << endl;
            cout <<  "\tCuticle work, cut, overlay, file, buff, and polish. A great alternative to acrylic\n"
            << "\toverlay to make your natural nails stronger without adding length! You just need to pick\n"
            << "\tone of our nail varnishes to complete your look!" << endl;
        }
        else if (pilihKategoriList == 4){
            harga = 1101000;
            cout << "\n\n\t1 hour 10 minutes  @ Rp1.101.000\n" << endl;
            cout <<  "\tCuticle work, cut, file, overlay, buff, and Gel polish. For all the gel polish lovers! To\n"
            << "\tkeep that shine for longer on your amazing set of nails!" << endl;
        }
     }

     else if(pilihKategori == 5){
        vector<string> kategoriList = {"Acrylic billills", "Acrylic billills with Shellac", "UV Gel billills", "UV Gel billills Shellac", "Ombre billills", "SNS billills", "SNS billills Shellac"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 776000;
            cout << "\n\n\t1 hour  @ Rp 776.000\n" << endl;
            cout <<  "\tThis will remedy your out – grown nails. The treatment fills out the gaps between the\n"
            << "\tacrylic and the cuticles. In-order to maintain your nails. They will need to be refilled,\n"
            << "\treshaped, buffed and polished every 2 – 3 weeks." << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 821000;
            cout << "\n\n\t1 hour 10 minutes   @ Rp 821.000\n" << endl;
            cout <<  "\tThe treatment fills out the gaps between the acrylic and the cuticles. With gel polish\n"
            << "\tfor longer lasting colour! In-order to maintain your nails, they will need to be refilled,\n"
            << "\treshaped, buffed and polished every 2 – 3 weeks." << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 821000;
            cout << "\n\n\t1 hour  @ Rp 821.000\n" << endl;
            cout <<  "\tYour perfect nail routine to keep your nails as beautiful as the first day! We recommend\n"
            << "\tyou book with us for your billills every 2-3 weeks!" << endl;
        }
        else if (pilihKategoriList == 4){
            harga = 907000;
            cout << "\n\n\t1 hour 10 minutes   @ Rp 907.000\n" << endl;
            cout <<  "\tYour perfect nail routine to keep your nails as beautiful as the first day! We recommend\n"
            << "\tyou book with us for your billills every 2-3 weeks! Make sure your polish will stay perfect"
            << "\twith our long lasting gel polishes!" << endl;
        }
        else if (pilihKategoriList == 5){
            harga = 821000;
            cout << "\n\n\t45 minutes    @ Rp 821.000\n" << endl;
            cout <<  "\tIf you love the natural look and you can't get enough of your ombre nails then this\n"
            << "\ttreatment is perfect for you! Your nails will look brand new!" << endl;
        }
        else if (pilihKategoriList == 6){
            harga = 821000;
            cout << "\n\n\t1 hour   @ Rp 821.000\n" << endl;
            cout <<  "\tIf you love the SNS colour you've chosen there's no need to take it off for a new set!\n"
            << "\tWe'll billill your nails for you to make them look fresh again!" << endl;
        }
        else if (pilihKategoriList == 7){
            harga = 907000;
            cout << "\n\n\t1 hour 10 minutes   @ Rp 907.000\n" << endl;
            cout <<  "\tFor everyone who opted for clear SNS we got you covered! You can get your set of nails\n"
            << "\tfilled-in and choose the perfect colour for you from our range of long lasting gel polishes!" << endl;
        }
     }

     else if(pilihKategori == 6){
        vector<string> kategoriList = {"Trieu Nails Deluxe Manicure", "Express Nails & Go", "Just Varnish", "Express Nails & Go with Shellac/ Gel", "Cuticle Oil Pen", "Gel Manicure with BIAB"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 700000;
            cout << "\n\n\t40 minutes  @ Rp 700.000\n" << endl;
            cout <<  "\tSpecially designed to leave your hands feeling wonderful. This treatment consists of\n"
            << "\tthe classical manicure topped with a lush hand massage." << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 350000;
            cout << "\n\n\t20 minutes   @ Rp 350.000\n" << endl;
            cout <<  "\tCut, file, buff and polish. This shape up is the ideal treatment if you are someone that is\n"
            << "\ton the go. The most basic of manicures which still leaves your hands looking fabulous!" << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 672;
            cout << "\n\n\t15 minutes  @ Rp 278.000\n" << endl;
            cout <<  "\tNails are buffed and a colour of your choice from our selection or from home is applied\n" << endl;
        }
        else if (pilihKategoriList == 4){
            harga = 700000;
            cout << "\n\n\t30 minutes  @ Rp 700.000\n" << endl;
            cout <<  "\tCut, file, buff and Gel polish. Are you in a rush but still want a flawless gel manicure?\n"
            << "\tThen Express & Go Shellac is the treatment for you!" << endl;
        }
        else if (pilihKategoriList == 5){
            harga = 75000;
            cout << "\n\n\t1 minutes  @ Rp 75.000\n" << endl;
        }
        else if (pilihKategoriList == 6){
            harga = 821000;
            cout << "\n\n\t45 minutes  @ Rp 821.000\n" << endl;
        }
     }

     else if(pilihKategori == 7){
        vector<string> kategoriList = {"Express Toes & Go", "Shellac Pedicure", "Express Toes & Go Shellac", "Big toe extension"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 640000;
            cout << "\n\n\t25 minutes  @ Rp 640.000\n" << endl;
            cout <<  "\tCut file shape and Polish. This is for when you want to treat your toes without too much\n"
            << "\tfuss and leave you with good looking feet in half the time." << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 909000;
            cout << "\n\n\t50 minutes   @ Rp 909.000\n" << endl;
            cout <<  "\tLooking for longevity? This shellac treatment is perfect for you. It includes everything\n"
            << "\tthat the Classical Pedicure has to offer, plus the long lasting effect of the Gel polish,\n"
            << "\tresistant up to 4 weeks." << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 750000;
            cout << "\n\n\t35 minutes  @ Rp 750.000\n" << endl;
            cout <<  "\tCut, file, shape and Gel Polish. This is the normal Express Toes & go BUT your smudging\n"
            << "\tday are over! As a bonus you will be on your way faster than you can spell shellac!" << endl;
        }
        else if (pilihKategoriList == 4){
            harga = 350000;
            cout << "\n\n\t20 minutes  @ Rp 350.000\n" << endl;
            cout <<  "\tSimply two big toes extensions"<< endl;
        }
     }

     else if(pilihKategori == 8){
        vector<string> kategoriList = {"Take Off Only Shellac", "Take Off Only Acrylic", "Take Off Only UV Gel"};

         for(int i = 0; i < kategoriList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << kategoriList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose number of the category you want to see details and book: ";
        cin >> pilihKategoriList;
        system("cls");

        if (pilihKategoriList == 1){
            harga = 200000;
            cout << "\n\n\t15 minutes  @ Rp 200.000\n" << endl;
            cout <<  "\tOur technician will buff off the top coat of your existing product and soak the rest\n"
            << "\tof shellac off with acetone to prevent nail damage. They will then continue to remove\n"
            << "\tthe rest of the remaining product." << endl;
        }
        else if (pilihKategoriList == 2){
            harga = 245000;
            cout << "25 minutes   @ Rp 245.000\n" << endl;
        }
        else if (pilihKategoriList == 3){
            harga = 301000;
            cout << "\n\n\t30 minutes  @ Rp 301.000\n" << endl;
            cout <<  "\tWe will drill your UV gel down to a thin layer and then buff the rest of them off\n"
            << "\twith a hand file to prevent the damage." << endl;
        }
     }

    cout << "\n\tSet the date." << endl;
    string dayList[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i = 0; i < 7; i++)
        {
            cout << "\t" << (i+1) <<".  " << dayList[i] << endl;
        }

    cout << "\n\tChoose number of when you want to get our treatment: " << endl;
    cout << "\tYour choice: ";
    cin >> day;
    system("cls");

     char addOn; int pilihAddOnList;
     cout << "\n\n\tDo you want to add some other treatment to your appointment?(y/n)" << endl;
     cout << "\n\tNote: every add on will charge you Rp 75.000 but it's worth it ;)";
     cout << "\n\n\tYour choice: ";
     cin >> addOn;
     system("cls");

     if (addOn == 'y' || addOn == 'Y'){
     vector<string> addOnList = {"Acrylic Fullset with tips & Shellac", "BIAB Base Builder Gel", "Chin Waxing", "Classical Manicure", "Classical Pedicure", "Cut Down (Natural Nails)", "Cuticle Oil Pen"};
         for(int i = 0; i < addOnList.size(); i++)
        {
            if (i==0){
                cout << "\n" << endl;
            }
            cout << "\t" << (i+1) <<".  " << addOnList[i] << endl;
        }
        cout << endl;
        cout << "\n\tChoose Number of the add on you want to book: ";
        cin >> pilihAddOnList;
        hargaAddOn = 75000;
        system("cls");

        cout << "\n\n\tBooking success" << endl;
        cout << "\tDirecting you to menu and you can take your bill" << endl;
        Sleep(2000);
        system("cls");
        Menu();
     } else if (addOn == 'n' || addOn == 'N') {
        cout << "\n\n\tBooking success" << endl;
        cout << "\tAlright then we're directing you to menu and you can take your bill" << endl;
        Sleep(2000);
        system("cls");
        Menu();
     }
}
};

double menuKategori::harga;
double menuKategori::hargaAddOn;
int menuKategori::day;

class Bill : public menuKategori {
private :
    char line[999];
public:
    void printBill()
    {
        if (day == NULL){
            cout << "\n\tYou haven't make any appointment yet" << endl;
            Sleep(2200);
            system("cls");
            Menu();
        }
        else {
        time_t tmNow = time(0);
        char *dt = ctime(&tmNow);

        string dayList[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        ofstream bill("bill.txt");
        {
            bill << "\n\tYour total will be: " << fixed << setprecision(0) << menuKategori::harga << endl;
            bill << "\tAdd On Price: " << fixed << setprecision(0) << menuKategori::hargaAddOn << endl;
            bill << "\tBook for(day): " << dayList[menuKategori::day-1] << endl;
            bill << "\tBooked at: " << dt << endl;

            bill << "\tTotal Charge: " << fixed << setprecision(0) << menuKategori::harga + menuKategori::hargaAddOn << endl;
        }
        bill.close();
        }
    }

    void showBill()
    {
        ifstream bill("bill.txt");
        {
            if(!bill)
            {
                cout << "File Error!" << endl;
            }
            while(!(bill.eof()))
            {
                bill.getline(line, 999);
                cout << line << endl;
            }
        }
        bill.close();
    }

};


void Menu(){
    int pilih;
    cout << "\n\tWelcome to Our Nail Art Salon." << endl;
    cout << "\tSimply select a category, then your treatment and maybe an add on." << endl;
    cout << "\tSelect time then click continue. Finally pay and all done. enjoy your treatment!." << endl;
    cout << "\tPILIH MENU :" << endl;
    cout << "\t1. Book Appointment" << endl;
    cout << "\t2. Charges & Bill" << endl;
    cout << "\t3. Exit" << endl;
    cout << "\n\tChoose Menu: ";
    cin >> pilih;

    system("cls");

    menuKategori book;
    Bill customer;

    if(pilih == 1){
        book.kategori();
    }
    else if (pilih == 2){
        int inChoice;
        customer.printBill();
            system("cls");
            customer.showBill();

    } else if(pilih == 3) {
        cout << "Terimakasih Silahkan Kembali lagi" << endl;
    } else {
        cout << "Invalid Input ! Redirecting to Main Menu" << endl;
        Sleep(2000);
        system("cls");
        Menu();
    }
}

int main(){
akun start;

return 0;
}
