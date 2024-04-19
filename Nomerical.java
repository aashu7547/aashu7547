/**
 * Nomerical
 */
public class Nomerical {

    /**
     * @param args
     */
    public static void main(String[] args) {
    /*  String nond ="My name is Aashutosh kumar";
        System.out.println(nond.length());
        String pump ="My bhowala friend name is Adharsh Singh";
        System.out.println(pump.indexOf("Singh"));*/
        // Declare and initialize an array of integers
int[] numbers = { 5, 10, 15, 20, 25 };
// Loop through the array and print each element
System.out.println("Array Elements:");
for (int i = 0; i < numbers.length; i++) {
System.out.print(numbers[i] + " ");
}
System.out.println(); // Print a newline
// Calculate the sum of array elements
int sum = 0;
for (int i = 0; i < numbers.length; i++) {
sum += numbers[i];
}
System.out.println("Sum of Array Elements: " + sum);
// Find the maximum element in the array
int max = numbers[0];
for (int i = 1; i < numbers.length; i++) {
if (numbers[i] > max) {
max = numbers[i];
}
}
System.out.println("Maximum Element: " + max);
// Use control statements to check if an element exists in the array
int searchValue = 15;
boolean found = false;
for (int i = 0; i < numbers.length; i++) {
if (numbers[i] == searchValue) {

found = true;
break; // Exit the loop when found
}
}
if (found) {
System.out.println(searchValue + " exists in the array.");
} else {
System.out.println(searchValue + " does not exist in the array.");
}
    }
}

