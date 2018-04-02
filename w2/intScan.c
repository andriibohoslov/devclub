// int intScan(FILE *in)
// Считать число из файла и вернуть его.

int intScan(FILE *in) {
    int temp;
    
    fscanf(in, "%d", &temp);
    return temp;
}
