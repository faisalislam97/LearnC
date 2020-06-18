#include <stdio.h> //contains printf() and
                   //scanf() functions

int main() //The main executed code
{
    int user_input;             //This variable stores numbers
                                //that are whole, without any
                                //fractional part or decimal part.
                                //What we see here, user_input,
                                //is a name for a location in
                                //memory of the computer where
                                //the value of user_input will
                                //be stored.


    printf("Integers are numbers without decimal points,\n"
        " and may be from positive and negative numbers.\n"
        " Zero is also an integer.\n"
        "Now that you know, please enter an integer: "
          );

    scanf("%i",&user_input);    //This function obtains input
                                //from the user, then stores
                                //the input in a memory location.
                                //To obtain the location of the
                                //variable user_input in the memory,
                                //we simply put & symbol before it.
                                //Scanf does not actually
                                //care about what variable you want
                                //to store in, it only cares about what
                                //memory location you are providing it.

    getchar();                  //this 'eats away' the enter key
                                //so that we can use the next
                                //getchar() for stopping
                                //the program till user enters
                                //the enter key next time.

    if ( user_input < 0) {      //if the condition in brackets
                                //is true, then the statements
                                //in the curly brackets is run.
                                //< means 'less than'
        printf("Your given integer %i is negative\n",
        user_input);
    } else if (user_input > 0) {
                                //if condition in previous
                                //if statement is false, then
                                //the condition in this bracket
                                //is checked.
                                //> means greater than
        printf("Your given integer %i is positive\n",
        user_input);
    } else {                    //if all conditions in this
                                //if..else if..else chain
                                //fail, then this block
                                //is executed.
        printf("Your given integer is zero\n");
    }

    if (user_input >= 100) {    //>= means greater than or
                                //equal to
        printf("The given integer %i is quite big\n"
               ,user_input);
    }

    if (23 == user_input) {     //== means equal to
                               //never confuse it with =
                               //best way to avoid issue
                               //is to write variable to
                               //check after ==
                               //as compiler will then
                               //tell there is an error
                               //if there is an = sign
                               //here.
        printf("That's my age!\n");
    }

    if (user_input <= 10 && user_input != 0) {
                                //<= means less than
                                //or equal to.
                                // && is used to combine
                                // two conditions, such
                                //that both must be true.
                                //it is also known as
                                //boolean AND.
                                //!= means 'not equals to
        printf("The given integer %i can be counted "
               "with fingers\n"
               ,user_input);
    }


    printf(
           "Press Enter to end this"
           " program");
                                //another subtle point to note here:
                                //printf does not actually care
                                //about the variable itself, it
                                //just needs a value to replace %d.
                                // To give the value of a variable,
                                //just use its name there.
    getchar();
    return 0;

}
