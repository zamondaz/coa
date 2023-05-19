class picture3 {
    picture3() {
        a = random(0, width);
        b = random(0, height);
        c = 80; vx = 0; vy = 0;
    }
    picture3(float x, float y, float d) {
        a = x; b = y; c = d;
        vx = random(-5, 5); vy = random(-5, 5);
    }
    float a, b, c, vx, vy, vv;
    picture1 pic;

    void collide(picture3 z) {
        float dd;
        dd = sqrt((a - z.a) * (a - z.a) + (b - z.b) * (b - z.b));
        if (dd < (c + z.c) / 2) {
            vx = -vx; z.vx = -z.vx;
            vy = -vy; z.vy = -z.vy;
        }
    }
    void ship() {
        strokeWeight(c * 0.05);
        stroke(18, 54, 100);
        fill(242, 194, 87);
        ellipse(a, b + c * 0.15, c * 0.15, c * 0.20);
        ellipse(a - c * 0.25, b + c * 0.12, c * 0.15, c * 0.20);
        ellipse(a + c * 0.25, b + c * 0.12, c * 0.15, c * 0.20);
        fill((a + 50) % 255, (b * 3) % 255, (a * b) % 255);
        ellipse(a, b, c, c * 0.30);
        fill(100, 230, 209);
        ellipse(a, b - c * 0.10, c * 0.50, c * 0.20);
        arc(a, b - c * 0.10, c * 0.50, c * 0.50, PI, 2 * PI);
        pic = new picture1(a, b - 5 * c / 6, c / 4);
        pic.ghost();
    }
    void actship() {
        a += vx; b += vy;
        if (a<0 || a>width)vx *= -1;
        if (b<0 || b>height)vy *= -1;
    }
}