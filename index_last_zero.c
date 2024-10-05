int index_last_zero(int asa[], int oso) {
    for (;; oso--) {
        if (asa[oso - 1] == 0) {
            return --oso;
        }
    }
}