class picture2 {
    picture2(float a, float b, float c) {
        x = a; y = b; d = c;
    }
    float x, y, d;
    picture2() {};
    void eara() {
        strokeWeight(3);
        stroke(0);
        line(x, y - 2 * d, x + 2 * d, y - 2 * d);
        line(x + 2 * d, y - 2 * d, x + 2 * d, y - 0.7 * d);
        line(x, y - 2 * d, x, y - 0.7 * d);
        noFill();
        arc(x + d, y - 0.7 * d, 2 * d, 1.8 * d, 0, PI);
        arc(x + d, y - 0.5 * d, d, 0.6 * d, 0, PI);
        noStroke();
        fill(250, 200, 250);
        circle(x + 1.7 * d, y - 0.7 * d, 0.5 * d);
        circle(x + 0.3 * d, y - 0.7 * d, 0.5 * d);
        stroke(0);
        strokeWeight(3);
        fill(0);
        ellipse(x + 1.5 * d, y - d, 0.2 * d, 0.4 * d);
        ellipse(x + 0.5 * d, y - d, 0.2 * d, 0.4 * d);
    }
}