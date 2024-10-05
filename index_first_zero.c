int index_first_zero(int asa[], int oso) {
    for (int i = 0; i < oso; i++) {
        if (asa[i] == 0) {
            return i;
        }
    }
}