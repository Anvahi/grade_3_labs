using System;
using System.Windows.Forms;

namespace NET_lab3 {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
            textBox1.Text = "1";
        }
        private void numericUpDown1_ValueChanged(object sender, EventArgs e) {
            textBox1.Clear();
            for (int i = 1; i <= numericUpDown1.Value; i++) {
                textBox1.Text += i + " ";
            }
        }
        private void button1_Click(object sender, EventArgs e) {
            comboBox1.Items.Add(textBox2.Text);
        }
        private void button2_Click(object sender, EventArgs e) {
            comboBox1.Items.Clear();
        }
        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e) {
            textBox3.Text = comboBox1.SelectedItem.ToString();
        }
        private void button3_Click(object sender, EventArgs e) {
            textBox6.Text = Convert.ToString(Convert.ToDouble(textBox4.Text) + Convert.ToDouble(textBox5.Text));
        }
        private void button4_Click(object sender, EventArgs e) {
            textBox6.Text = Convert.ToString(Convert.ToDouble(textBox4.Text) - Convert.ToDouble(textBox5.Text));
        }
        private void button5_Click(object sender, EventArgs e) {
            textBox6.Text = Convert.ToString(Convert.ToDouble(textBox4.Text) * Convert.ToDouble(textBox5.Text));
        }
        private void button6_Click(object sender, EventArgs e) {
            textBox6.Text = Convert.ToString(Convert.ToDouble(textBox4.Text) / Convert.ToDouble(textBox5.Text));
        }
        private void button7_Click(object sender, EventArgs e) {
            comboBox2.Items.Clear();
            for (int i = 0; i < textBox7.Lines.Length; i++) {
                double d = 0;
                if (double.TryParse(textBox7.Lines[i], out d))
                    if (textBox7.Lines[i].Contains(","))
                        comboBox2.Items.Add(textBox7.Lines[i]);
            }
        }
        private void numericUpDown2_ValueChanged(object sender, EventArgs e) {
            if (numericUpDown2.Value == (decimal)0.01)
                numericUpDown2.DecimalPlaces = 2;
            if (numericUpDown2.Value == (decimal)0.000001)
                numericUpDown2.DecimalPlaces = 6;
        }
        private void button8_Click(object sender, EventArgs e) {
            double pr = (double)numericUpDown2.Value;
            const double st = 1.0;
            string log = "";
            double prev = double.MaxValue, curr = double.MinValue;
            double sum = 0.0;
            for (double x = st; Math.Abs(prev - curr) > pr; x++) {
                prev = curr;
                curr = series(x);
                sum += curr;
                log += curr + "\r\n";
            }
            textBox8.Text = log;
            label1.Text = "Sum: " + sum;
        }
        private double series(double x) {
            return 1 / x;
        }
        private void button9_Click(object sender, EventArgs e) {
            textBox10.Clear();
            for (int i = textBox9.Lines.Length-1; i >= 0; i--) {
                double d = 0;
                if (!double.TryParse(textBox9.Lines[i], out d))
                    textBox10.Text += textBox9.Lines[i] + "\r\n";
            }
        }
        private void button10_Click(object sender, EventArgs e) {
            textBox14.Clear();
            for (double i = Convert.ToDouble(textBox11.Text); i < Convert.ToDouble(textBox12.Text)+0.000001; i += Convert.ToDouble(textBox13.Text)) {
                textBox14.Text += "x = " + i + "; f(x) = " + Math.Sin(i) / (Math.Abs(i) + 1) + ";\r\n";
            }
        }
    }
}