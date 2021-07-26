//
//  shopping.h
//  Blockchain
//
//  Created by Brian Fernandez on 12/21/20.
//

#ifndef shopping_h
#define shopping_h

string viewShirtSizes();
string viewShirtColors();
string viewShirtStyles();
string viewPantSizes();
string viewPantColors();
string viewShoeSizes();
string viewShoeColors();

void viewCatalog(){
    cout<<"***************************\n";
    cout<<"Catalog:\n";
    cout<<"1. Shirts \n";
    cout<<"2. Pants \n";
    cout<<"3. Shoes \n";
    cout<<"4. Continue to cart ||Quit \n";
    cout<<"***************************\n";
}

string viewShirts(){
    int n;
    int sizeCounter = 0;
    int colorCounter = 0;
    int styleCounter = 0;
    string shirtString;
    do {
        int totalCounter = sizeCounter + colorCounter + styleCounter;
        
        if(totalCounter == 3){
            cout<<"Your shirt (SKU# "<<shirtString<< ") was added to the cart\n";
            break;
        }
        cout<<"***************************\n";
        cout<<"Customize your shirt!";
        cout<<"\n***************************\n";
        cout<<"1. View sizes \n";
        cout<<"2. View colors \n";
        cout<<"3. View styles \n";
        cout<<"4. Back \n";
        cin>>n;
        
        /*while(cin.fail())
        {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'/n');
        cout<<"You have entered wrong input"<<endl;
        cin>>n;
        if(!cin.fail())
        break;
        }*/
        
    switch (n){
        case 1:
            if(sizeCounter == 1){
                cout<<"You've already selected a size for your shirt!\n";
                break;
            }
            shirtString.append(viewShirtSizes());
            sizeCounter++;
            break;
        case 2:
            if(colorCounter == 1){
                cout<<"You've already selected a color for your shirt!\n";
                break;
            }
            shirtString.append(viewShirtColors());
            colorCounter++;
            break;
        case 3:
            if(styleCounter == 1){
                cout<<"You've already selected a style for your shirt!\n";
                break;
            }
            shirtString.append(viewShirtStyles());
            styleCounter++;
            break;
        case 4:
            if(shirtString.empty())
                cout<<"Back to catalog\n";
            else{
                cout<<"Your shirt (SKU# "<<shirtString<< ") was added to the cart\n";
            break;
    }
        default:
            cout<<"Invalid input, try again.\n";
    }
    }while (n != 4);
    
    return shirtString;
}
string viewShirtSizes(){
    string temp;
    int m;
    cout<<"***************************";
    cout<<"\nSelect a size\n";
    cout<<"***************************\n";
    string sizes[3];
    sizes[0] = "Small";
    sizes[1] = "Medium";
    sizes[2] = "Large";
    
    for(int i =0; i<3; i++){
        cout<<i<<". "<<sizes[i]<<endl;
    }
    cin>> m;
    while(!(m >= 0 && m < 3)){
        cout<<"Invalid selection, try again.\n";
        cin>> m;
    }
    temp = (sizes[m]);
    cout<<"You selected "<<temp<<".\n";
    return temp;
    }
string viewShirtColors(){
    string temp;
    int m;
    cout<<"***************************";
    cout<<"\nSelect a color\n";
    cout<<"***************************\n";
    string colors[3];
    colors[0] = "White";
    colors[1] = "Black";
    colors[2] = "Red";
    for(int i =0; i<3; i++){
        cout<<i<<". "<<colors[i]<<endl;
    }
    cin>> m;
    while(!(m >= 0 && m < 3)){
        cout<<"Invalid selection, try again.\n";
        cin>> m;
    }
    temp = (colors[m]);
    cout<<"You selected "<<temp<<".\n";
    return temp;
}
string viewShirtStyles(){
    string temp;
    int m;
    cout<<"***************************";
    cout<<"\nSelect a style\n";
    cout<<"***************************\n";
    string styles[2];
    styles[0] = "Longsleeved";
    styles[1] = "Shortsleeved";
    for(int i =0; i<2; i++){
        cout<<i<<". "<<styles[i]<<endl;
    }
    cin>> m;
    while(!(m >= 0 && m < 2)){
        cout<<"Invalid selection, try again.\n";
        cin>> m;
    }
    temp = (styles[m]);
    cout<<"You selected "<<temp<<".\n";

    return temp;
}

string viewShoes(){
    int n;
    int sizeCounter = 0;
    int colorCounter = 0;
    string shoeString;
    do{
        int totalCounter = sizeCounter + colorCounter;
        
        if(totalCounter == 2){
            cout<<"Your shoe (SKU# "<<shoeString<< ") was added to the cart\n";
            break;
        }
    cout<<"***************************\n";
    cout<<"Customize your shoes!";
    cout<<"\n***************************\n";
    cout<<"1. View sizes \n";
    cout<<"2. View colors \n";
    cout<<"3. Back \n";
    cin>>n;
    switch (n){
        case 1:
            if(sizeCounter == 1){
                cout<<"You've already selected a size for your shoe!\n";
                break;
            }
            shoeString.append(viewShoeSizes());
            sizeCounter++;
            break;
        case 2:
            if(colorCounter == 1){
                cout<<"You've already selected a color for your shoe!\n";
                break;
            }
            shoeString.append(viewShoeColors());
            colorCounter++;
            break;
        case 3:
            if(shoeString.empty())
                cout<<"Back to catalog\n";
            else{
                cout<<"Your shirt (SKU# "<<shoeString<< ") shirt was added to the cart\n";
            }
            break;
    }
    }while(n !=3);
    return shoeString;
}
string viewShoeSizes(){
    string temp;
    int m;
    cout<<"***************************";
    cout<<"\nSelect a size\n";
    cout<<"***************************\n";

    string sizes[4];
    sizes[0] = "Size 9";
    sizes[1] = "Size 10";
    sizes[2] = "Size 11";
    sizes[3] = "Size 12";
    for(int i =0; i<4; i++){
        cout<<i<<". "<<sizes[i]<<endl;
    }
    cin>> m;
    while(!(m >= 0 && m < 4)){
        cout<<"Invalid selection, try again.\n";
        cin>> m;
    }
    temp = (sizes[m]);
    cout<<"You selected "<<temp<<".\n";
    return temp;
    }
string viewShoeColors(){
    string temp;
    int m;
    cout<<"***************************";
    cout<<"\nSelect a color\n";
    cout<<"***************************\n";
    string colors[3];
    colors[0] = "Navy";
    colors[1] = "Matte Black";
    colors[2] = "Cream";
    for(int i = 0; i < 3; i++){
        cout<<i<<". "<<colors[i]<<endl;
    }
    cin>>m;
    while(!(m >= 0 && m < 3)){
        cout<<"Invalid selection, try again.\n";
        cin>> m;
    }
    temp = (colors[m]);
    cout<<"You selected "<<temp<<".\n";

    return temp;}

string viewPants(){
    int n;
    int sizeCounter = 0;
    int colorCounter = 0;
    string pantString;
    do {
        int totalCounter = sizeCounter + colorCounter;
        
        if(totalCounter == 2){
            cout<<"Your pants (SKU# "<<pantString<< ") was added to the cart\n";
            break;
        }
    cout<<"***************************\n";
    cout<<"Customize your pair of pants!";
    cout<<"\n***************************\n";
    cout<<"1. View sizes \n";
    cout<<"2. View colors \n";
    cout<<"3. Back \n";
    cin>>n;
    switch (n){
        case 1:
            if(sizeCounter == 1){
                cout<<"You've already selected a size for your pants!\n";
                break;
            }
            pantString.append(viewPantSizes());
            sizeCounter++;
            break;
        case 2:
            if(colorCounter == 1){
                cout<<"You've already selected a color for your pants!\n";
                break;
            }
            pantString.append(viewPantColors());
            colorCounter++;
            break;
        case 3:
            if(pantString.empty())
            cout<<"Back to catalog\n";
            else{
            cout<<"Your pants (SKU# "<<pantString<< ") was added to the cart\n";
            }
            break;
    }
    }while (n != 3);
    return pantString;
}
string viewPantSizes(){
    string temp;
    int m;
    cout<<"***************************";
    cout<<"\nSelect a size\n";
    cout<<"***************************\n";
    string sizes[3];
    sizes[0] = "Slim";
    sizes[1] = "Bootcut";
    sizes[2] = "Regular";
    
    for(int i =0; i<3; i++){
        cout<<i<<". "<<sizes[i]<<endl;
    }
    cin>> m;
    while(!(m >= 0 && m < 3)){
        cout<<"Invalid selection, try again.\n";
        cin>> m;
    }
    temp = (sizes[m]);
    cout<<"You selected "<<temp<<".\n";

    return temp;
}
string viewPantColors(){
    string temp;
    int m;
    cout<<"***************************";
    cout<<"\nSelect a color\n";
    cout<<"***************************\n";
    string colors[3];
    colors[0] = "Blue";
    colors[1] = "Black with Stripes";
    colors[2] = "Khaki";
    for(int i =0; i<3; i++){
        cout<<i<<". "<<colors[i]<<endl;
    }
    cin>> m;
    while(!(m >= 0 && m < 3)){
        cout<<"Invalid selection, try again.\n";
        cin>> m;
    }
    temp = (colors[m]);
    cout<<"You selected "<<temp<<".\n";

    return temp;
}


string selection(){
    string catalogItems[21];
    double catalogPrices[21];
    double cartTotal = 0.00;
    double const tax = 0.0625;
    
    catalogItems[0] = "Small";
    catalogItems[1] = "Medium";
    catalogItems[2] = "Large";
    catalogItems[3] = "White";
    catalogItems[4] = "Black";
    catalogItems[5] = "Red";
    catalogItems[6] = "Longsleeved";
    catalogItems[7] = "Shortsleeved";
    catalogItems[8] = "Size 9";
    catalogItems[9] = "Size 10";
    catalogItems[10] = "Size 11";
    catalogItems[11] = "Size 12";
    catalogItems[12] = "Navy";
    catalogItems[13] = "Matte Black";
    catalogItems[14] = "Cream";
    catalogItems[15] = "Slim";
    catalogItems[16] = "Bootcut";
    catalogItems[17] = "Regular";
    catalogItems[18] = "Blue";
    catalogItems[19] = "Black with Stripes";
    catalogItems[20] = "Khaki";
    catalogPrices[0] = 9.99;
    catalogPrices[1] = 10.99;
    catalogPrices[2] = 11.99;
    catalogPrices[3] = 0.99;
    catalogPrices[4] = 1.49;
    catalogPrices[5] = 1.99;
    catalogPrices[6] = 4.99;
    catalogPrices[7] = 3.99;
    catalogPrices[8] = 19.99;
    catalogPrices[9] = 22.99;
    catalogPrices[10] = 24.99;
    catalogPrices[11] = 26.99;
    catalogPrices[12] = 4.99;
    catalogPrices[13] = 2.99;
    catalogPrices[14] = 2.99;
    catalogPrices[15] = 14.99;
    catalogPrices[16] = 13.99;
    catalogPrices[17] = 12.99;
    catalogPrices[18] = 4.99;
    catalogPrices[19] = 2.99;
    catalogPrices[20] = 3.99;

    
    string cart;
    char select;
    int sel;
    do{
        viewCatalog();
        cin>>sel;
       switch (sel) {
        case 1:
               cart.append(viewShirts());
               if(!(cart.empty()))
                   cart.append("_Shirt ");
               break;
        case 2:
               cart.append(viewPants());
               if(!(cart.empty()))
                   cart.append("_Pants ");
               break;
        case 3:
               cart.append(viewShoes());
               if(!(cart.empty()))
                   cart.append("_Shoes ");
               break;
        case 4:
               if(!(cart.empty())){
                   cout<<"You've added the following items to the cart: "<<cart<<" "<<endl;
                   cout<<"Your total is...\n";
                   break;
               }
               else
                   cout<<"Are you sure you want to exit the application? (Y/N)\n";
               cin>>select;
               if ((select = toupper(select)) == 'Y'){
                   exit(0);
               }
               else
               sel = 5;
            break;
               }
       }while(sel !=4);
    for (int i = 0; i < 21; i++) {
        if (cart.find(catalogItems[i],0) < 100 ) {
            //cout<<cart.find(catalogItems[i]);
            cartTotal += catalogPrices[i];
        }
    }
    cartTotal += cartTotal * tax;
    cart.append(to_string(cartTotal));

    printf("$%.2f",cartTotal);
    cout<<endl;
    cout << "\nMining block...\n";

    return cart;
}

#endif /* shopping_h */
