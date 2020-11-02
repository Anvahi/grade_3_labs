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
    public partial class ClientForm : Form {
        public Clients Clients { get; }

        public ClientForm(Clients _clients) {
            InitializeComponent();
            Clients = _clients;
            textBoxClientName.Text = Clients.Name;
            textBoxClientPropertyType.Text = Clients.property_type;
            textBoxClientAdress.Text = Clients.adress;
            maskedTextBoxPhone.Text = Clients.phone;
            textBoxClientContactPerson.Text = Clients.contact_person;

        }

        private void buttonClientSave_Click(object sender, EventArgs e) {
            Clients.Name = textBoxClientName.Text;
            Clients.property_type = textBoxClientPropertyType.Text;
            Clients.adress = textBoxClientAdress.Text;
            Clients.phone = maskedTextBoxPhone.Text;
            Clients.contact_person = textBoxClientContactPerson.Text;
        }
    }
}