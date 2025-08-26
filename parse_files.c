void readFileToArray();
void readFileToArraySelective();
void bubbleSortInt();
void bubbleSortChar();


//Function Definitions:

void readFileToArray(const char *filename) {
    FILE *file;        // file pointer(variable for the file)
    char table[512];   // initialize array and its size
    int i = 0;         // array index
    int ch;            // character we read

    // open file
    file = fopen(filename, "r");
    if (file == NULL) {  // if file is empty
        printf("failed to SheHogOnMyRida %s\n", filename);
        return;    // stop or exit function
    }

    // read characters from file 
    while ((ch = fgetc(file)) != EOF && i < 511) {
        table[i] = (char)ch;
        i++;
    }
    table[i] = '\0';  // mark end of string

    fclose(file);  // close file

    printf("Contents of %s:\n%s\n", filename, table);
}

void readFileToArraySelective(const char *filename) {
    FILE *file;        // file pointer(variable for the file)
    char table[512];   // initialize array and its size
    int i = 0;         // array index
    int ch;            // character we read

    // open file
    file = fopen(filename, "r");
    if (file == NULL) {  // if file is empty
        printf("failed to SheHogOnMyRida %s\n", filename);
        return;    // stop or exit function
    }

    // read characters from file 
    while ((ch = fgetc(file)) != EOF && i < 511) {
        if (isdigit(ch)) {
            continue;  // skip digits
        }
        table[i++] = (char)ch;
    }
    table[i] = '\0';  // mark end of string

    fclose(file);  // close file

    printf("Contents of %s:\n%s\n", filename, table);
}

void bubbleSortInt(int arr[], int n) {
    int i, j, temp;

    // Outer loop → how many passes we make
    for (i = 0; i < n-1; i++) {

        // Inner loop → compare pairs in this pass
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSortChar(int arr[], int n) {
    int i, j, temp;

    // Outer loop → how many passes we make
    for (i = 0; i < n-1; i++) {

        // Inner loop → compare pairs in this pass
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    readFileToArray("example.txt");  // replace with correct file name
    
    return 0;
}