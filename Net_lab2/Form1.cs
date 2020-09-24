using System;
using System.Drawing;
using System.Windows.Forms;

namespace NET_lab2_1 {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }
        private void button1_Click(object sender, EventArgs e) {
            this.FormBorderStyle = FormBorderStyle.Sizable;
        }
        private void button2_Click(object sender, EventArgs e) {
            this.Size = new Size(514,390); 
        }
        private void button3_Click(object sender, EventArgs e) {
            this.Opacity = 1;
        }
    }
}