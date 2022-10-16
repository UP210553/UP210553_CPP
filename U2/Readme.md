<div align = "center">
<h1>

# **Unit 2**
 <div align = "justify">

># **Index:** 
>## [Exercise 1](#1-renta)  
>## [Exercise 2](#2-benefits)  
>## [Exercise 3](#3-tickets)  
>## [Exercise 4](#4-pizzeria)  
>## [Exercise 5](#5-temperature)  
>## [Exercise 6](#6-bill)  
>## [Exercise 7](#7-bindec)    
>## [Exercise 8](#8-multiplication-tables)    
>## [Exercise 9](#9-bisection-method)    

</h3>
<div align = "justify">
 
># **1. Rent:**
>## **What does it request?** 
>### A program that asks the user for his annual rent and displays the corresponding tax rate
>## **Input.**
```c++
    // Data entry
    cout << "Introduce el costo de tu renta: " << endl;
    cin >> renta;
```
>## **Process.**
```c++
    // Data processing
    if (renta < 10000)
    {
        porcentaje = 5;
    }
    else if (renta >= 10000 && renta < 20000)
    {
        porcentaje = 15;
    }
    else if (renta >= 20000 && renta < 35000)
    {
        porcentaje = 20;
    }
    else if (renta >= 35000 && renta < 60000)
    {
        porcentaje = 30;
    }
    else if (renta >= 60000)
    {
        porcentaje = 45;
    }
    else
    {
        cout << "ERROR: la renta introducida es incorrecta" << endl;
    }
    impuestoAPAgar = renta * porcentaje / 100;

```
>## **Output.**
```c++
    //Data output
    cout << "El porcentaje impuesto es de: " << porcentaje << "%" << endl;
    cout << "El impuesto a pagar es de: $" << impuestoAPAgar << endl;
```
>## **Explanation.**
>### 1. Ask the user for his annual rent.
>### 2. With the information we can start with our comparison process
>### 2.1 If the user does not enter a valid rent, print a message that the user entered an incorrect number.  
>### 2.2 If the user entered a valid rent, continue with the program.
>### 3.  Check by several if's which tax rate.  
>### 3.1 If the rent is less than $10, 000 it is 5% (.05).  
>### 3.2 If the rent is greater than or equal to $10,000 and less than $20,000 it is 15% (.15).  
>### 3.3 If the rent is greater or equal to $20,000 and less than $35,000, it is 20% (.20).   
>### 3.4 If the rent is greater or equal to $35,000 and less than $60,000 it is 30% (.30).  
>### 3.5 If the rent is greater than $60,000 it is 45% (.45). 
>### 4. Multiply the rent by the tax rate.
>### 5. Print the tax rate and its equivalent in dollars. 
>## **Tests.**
>### A) Rent < $10,000
> <img src="../Imagenes/P1_01.png" align="center" height="150" width="700"/>
> 
>### B) Rent >= $10,000 and Rent < $20,000
> <img src="../Imagenes/P1_02.png" align="center" height="150" width="700"/>
>  
>### C) Rent >= $20,000 and Rent < $35,000 
> <img src="../Imagenes/P1_03.png" align="center" height="150" width="700"/>
> 
>### D) Rent >= $35,000 and Rent < $60,000
> <img src="../Imagenes/P1_04.png" align="center" height="150" width="700"/>
> 
>### F) Rent >= $60,000
> <img src="../Imagenes/P1_05.png" align="center" height="150" width="700"/>


># **2. Benefits:**
>## **What does it request?** 
>### A program that asks the user for his score and displays the corresponding typo of benefit and money
>## **Input.**
```c++
    // Data entry
    cout<<"Enter your rating: "<<endl;
    cin>>calificacion;
```
>## **Process.**
```c++
    // Code Process
    if (calificacion==0.0||calificacion==0.4||calificacion>=0.6&&calificacion<=1){
        beneficios= 2400*calificacion;
        // Data output
        cout<<"Your rate is: "<<calificacion<<endl;
        cout<<"Your benefit will be: $"<<beneficios<<endl;
    }
    else {
        // Data output
        cout<<"Error: Try again, please your rating correctly.  "<<endl;
    }
```
>## **Output.**
```c++
    // Data output
    cout<<"Your rate is: "<<calificacion<<endl;
    cout<<"Your benefit will be: $"<<beneficios<<endl;
    // Data output
    cout<<"Error: Try again, please enter your rating correctly.  "<<endl;
```
>## **Explanation.**
>###
>## **Tests.**
>###


# **3. Tickets:**
>## **What does it request?** 
>###  A program that asks for your age and print the cost of ticked
>## **Input.**
```c++
    // Data entry
    cout << "How is the age of the client? " << endl;
    cin >> edad;
```
>## **Process.**
```c++
    // Data processing
    if (edad < 0)
    {
        cout << "Check the data entered please" << endl;
    }
    else
    {
        if (edad < 4)
        {
            costoEntrada = 0;
        }
        if (edad >= 4 && edad <= 18)
        {
            costoEntrada = 5;
        }
        if (edad > 18)
        {
            costoEntrada = 10;
        }
```
>## **Output.**
```c++
    // Data output
    cout << "The coste of the ticket is= $" << costoEntrada << endl;
```
>## **Explanation.**
>###
>## **Tests.**
>###

# **4. Pizzeria:**
>## **What does it request?** 
>### Menu of Bella Napoli pizzeria showing your type of pizza and ingredients
>## **Input.**
```c++
    // Data entry
    cout << "Do you want a vegetarian pizza: \n 1=Yes 0=No  \n =";
    cin >> tipoDePizza;
    cout << "Enter the number of the ingredient you want: " << endl;
    cin >> ingredientesVeggie;
    cout << "Enter the number of the ingredient you want: " << endl;
    cin >> ingrdientesNotVeggie;
```
>## **Process.**
```c++
    // Data processing
    if (tipoDePizza == 1)
    {
        cout << "These are the ingredients available for the vegetarian pizza: \n You only can pick one. Remember all the pizzas have mozzarella and tomato sauce. \n 1.Tofu 2.Peppers " << endl;
        cout << "=====================================================================" << endl;
        cout << "Enter the number of the ingredient you want: " << endl;
        cin >> ingredientesVeggie;
        cout << "=====================================================================" << endl;
        if (ingredientesVeggie == 1)
        {
             // Data output
            cout << "Your pizza will be vegetarian with tofu " << endl;
        }
        else if (ingredientesVeggie == 2)
        {
            // Data output
            cout << "Your pizza will be vegetarian with peppers " << endl;
        }
        else
        {
            // Data output
            cout << "Error start over, make sure you enter the data correctly please.";
        }
    }
    else if (tipoDePizza == 0)
    {
        cout << "These are the ingredients available for the not vegetarian pizza: \n You only can pick one. Remember all the pizzas have mozzarella and tomato sauce. \n 1.Peperoni 2.Ham 3.Salmon " << endl;
        cout << "=====================================================================" << endl;
        cout << "Enter the number of the ingredient you want: " << endl;
        cin >> ingrdientesNotVeggie;
        cout << "=====================================================================" << endl;
        if (ingrdientesNotVeggie == 1)
        {
            // Data output
            cout << "Your pizza will not be vegetarian with peperoni " << endl;
        }
        else if (ingrdientesNotVeggie == 2)
        {
            // Data output
            cout << "Your pizza will not be vegetarian with ham " << endl;
        }
        else if (ingrdientesNotVeggie == 3)
        {
            // Data output
            cout << "Your pizza will not be vegetarian with salmon " << endl;
        }
        else
        {
            // Data output
            cout << "Error start over, make sure you enter the data correctly please.";
        }
    }
    else
    {
        cout << "=====================================================================" << endl;
        // Data output
        cout << "Error start over, make sure you enter the data correctly please.";
    }
```
>## **Output.**
```c++
    // Data output
    cout << "Your pizza will be vegetarian with tofu " << endl;
    // Data output
    cout << "Your pizza will be vegetarian with peppers " << endl;
    // Data output
    cout << "Error start over, make sure you enter the data correctly please.";
    // Data output
    cout << "Your pizza will not be vegetarian with peperoni " << endl;
    // Data output
    cout << "Your pizza will not be vegetarian with ham " << endl;
    // Data output
    cout << "Your pizza will not be vegetarian with salmon " << endl;
    // Data output
    cout << "Error start over, make sure you enter the data correctly please.";

```
>## **Explanation.**
>###
>## **Tests.**
>###

# **5. Temperature:**
>## **What does it request?** 
>### Ask the user 6 temperature and print the mean, highest and lowest temperature.
>## **Input.**
```c++

```
>## **Process.**
```c++

```
>## **Output.**
```c++

```
>## **Explanation.**
>###
>## **Tests.**
>###

# **6. Bill:**
>## **What does it request?** 
>### Ask the user indefinitely the amount and price of the products, finally print the total price.
>## **Input.**
```c++

```
>## **Process.**
```c++

```
>## **Output.**
```c++

```
>## **Explanation.**
>###
>## **Tests.**
>###

# **7. BinDec:**
>## **What does it request?** 
>### A program to convert decimal to binary
>## **Input.**
```c++

```
>## **Process.**
```c++

```
>## **Output.**
```c++

```
>## **Explanation.**
>###
>## **Tests.**
>###

# **8. Multiplication tables:**
>## **What does it request?** 
>### A program that prints the table of a desired number with a length entered by the user
>## **Input.**
```c++

```
>## **Process.**
```c++

```
>## **Output.**
```c++

```
>## **Explanation.**
>###
>## **Tests.**
>###

# **9. Bisection method:**
>## **What does it request?** 
>###
>## **Input.**
```c++

```
>## **Process.**
```c++

```
>## **Output.**
```c++

```
>## **Explanation.**
>###
>## **Tests.**
>###