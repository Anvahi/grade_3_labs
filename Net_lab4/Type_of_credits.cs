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
    public partial class Type_of_credits_form : Form {
        public Types_of_Credits Type_of_Credits { get; }
        public Type_of_credits_form(Types_of_Credits _typeofcredits) {
            InitializeComponent();
            Type_of_Credits = _typeofcredits;
            textBoxTypeOfCreditsName.Text = Type_of_Credits.name;
            textBoxTypeOfCreditTerms.Text = Type_of_Credits.terms;
            textBoxTypeOfCreditsRate.Text = Convert.ToString(Type_of_Credits.credit_rate);
            dateTimePickerTypeOfCreditsDate.Value = Type_of_Credits.Date;
        }

        private void buttonTypeOfCreditsSave_Click(object sender, EventArgs e) {
            Type_of_Credits.name = textBoxTypeOfCreditsName.Text;
            Type_of_Credits.terms = textBoxTypeOfCreditTerms.Text;
            Type_of_Credits.credit_rate = Convert.ToDouble(textBoxTypeOfCreditsRate.Text);
            Type_of_Credits.Date = dateTimePickerTypeOfCreditsDate.Value;
        }

        private void textBoxTypeOfCreditsRate_KeyPress(object sender, KeyPressEventArgs e) {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar) && (e.KeyChar != ',')) {
                e.Handled = true;
            }
            if ((e.KeyChar == ',') && ((sender as TextBox).Text.IndexOf(',') > -1)) {
                e.Handled = true;
            }
        }
    }
}