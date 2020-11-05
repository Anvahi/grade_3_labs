using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using NET_lab4_classes;

namespace Net_lab4 {
    public partial class Form1 : Form {
        public Form1() {
            InitializeComponent();
        }

        private Clients _clients;
        private Types_of_Credits _typeofcredits;

        private void AddTypeOfCreditToolStripMenuItem_Click(object sender, EventArgs e) {
            _typeofcredits = new Types_of_Credits();
            Type_of_credits_form formtypeofcredits = new Type_of_credits_form(_typeofcredits);
            if (formtypeofcredits.ShowDialog() == DialogResult.OK) {
                _typeofcredits = formtypeofcredits.Type_of_Credits;
            }
        }

        private void EditTypeOfCreditToolStripMenuItem_Click(object sender, EventArgs e) {
            Type_of_credits_form formtypeofcredits = new Type_of_credits_form(_typeofcredits);
            if (formtypeofcredits.ShowDialog() == DialogResult.OK) {
                _typeofcredits = formtypeofcredits.Type_of_Credits;
            }
        }

        private void AddClientToolStripMenuItem1_Click(object sender, EventArgs e) {
            _clients = new Clients();
            ClientForm formClient = new ClientForm(_clients);
            if (formClient.ShowDialog() == DialogResult.OK) {
                _clients = formClient.Clients;
            }
        }

        private void EditClientToolStripMenuItem1_Click(object sender, EventArgs e) {
            ClientForm formClient = new ClientForm(_clients);
            if (formClient.ShowDialog() == DialogResult.OK) {
                _clients = formClient.Clients;
            }
        }
    }
}
