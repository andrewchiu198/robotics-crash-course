// Array Task 1

void setup() {
  Serial.begin(9600);

  // Creat an array of type int and size 10:
  int arr[10];
  // Using a while loop, fill the array with multiples of 3 between 3 and 30 (inclusive):
                // Remember the syntax?
                // while (condition) {
                //       code...
                // }
  int i = 0;
  while(i < 10) {
    arr[i] = i + 1;
    arr[i] = arr[i] * 3;
    i++;
  }


  // Rewrite the code above with a for loop:
                // Remember the syntax?
                // for (initialization; condition; update variable) {
                //       code...
                // }

  for(int j = 0; j < 10; j++) {
    arr[i] = j + 1;
    arr[i] = arr[j] * 3;
  }

  // Write a loop that will go through the array 
  //     and print any values that are a multiple of 9:
                // Hint: Use the % (modulus) operator.

  int x = 0;
  while(x < 10) {
    if(arr[x] % 9 == 0) {
      Serial.println((x+1)*3);
    }

    x++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
