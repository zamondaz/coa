class picture1 {
    picture1() {
        a = random(0, width);
        b = random(0, height);
        s = 25;
    }
    picture1(float x, float y, float z) {
        a = x; b = y; s = z;
    }
    float a, b, s;
    void ghost() {
        noStroke();
        fill(226, 185, 255);
        circle(a, b, 2 * s);
        square(a - s, b, 2 * s);
        circle(a - 3 * s / 4, b + 2 * s, s / 2);
        circle(a - s / 4, b + 2 * s, s / 2);
        circle(a + s / 4, b + 2 * s, s / 2);
        circle(a + 3 * s / 4, b + 2 * s, s / 2);
        fill(255, 255, 220);
        circle(a - s / 2, b, 2 * s / 3);
        circle(a + s / 2, b, 2 * s / 3);
    }
}