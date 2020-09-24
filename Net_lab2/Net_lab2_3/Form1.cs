using System.Windows.Forms;

namespace NET_lab2_3 {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }
        private void linkLabel1_LinkClicked(object sender, LinkLabelLinkClickedEventArgs e) {
            Form2 aForm = new Form2();
            DialogResult aResult = aForm.ShowDialog();
            if (aResult == System.Windows.Forms.DialogResult.OK) {
                MessageBox.Show("Your name is " + aForm.textBox1.Text + " " + aForm.textBox2.Text);
            }
            linkLabel1.LinkVisited = true;
        }
    }
}
