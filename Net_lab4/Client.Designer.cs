namespace Net_lab4
{
    partial class ClientForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.textBoxClientName = new System.Windows.Forms.TextBox();
            this.textBoxClientPropertyType = new System.Windows.Forms.TextBox();
            this.textBoxClientAdress = new System.Windows.Forms.TextBox();
            this.textBoxClientContactPerson = new System.Windows.Forms.TextBox();
            this.buttonClientSave = new System.Windows.Forms.Button();
            this.maskedTextBoxPhone = new System.Windows.Forms.MaskedTextBox();
            this.SuspendLayout();
            // 
            // label
            // 
            this.label.AutoSize = true;
            this.label.Location = new System.Drawing.Point(12, 9);
            this.label.Name = "label";
            this.label.Size = new System.Drawing.Size(57, 13);
            this.label.TabIndex = 0;
            this.label.Text = "Название";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 31);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(105, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Вид собственности";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 53);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(38, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Адрес";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(12, 75);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(52, 13);
            this.label4.TabIndex = 3;
            this.label4.Text = "Телефон";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(12, 97);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(93, 13);
            this.label5.TabIndex = 4;
            this.label5.Text = "Контактное лицо";
            // 
            // textBoxClientName
            // 
            this.textBoxClientName.Location = new System.Drawing.Point(123, 6);
            this.textBoxClientName.Name = "textBoxClientName";
            this.textBoxClientName.Size = new System.Drawing.Size(184, 20);
            this.textBoxClientName.TabIndex = 5;
            // 
            // textBoxClientPropertyType
            // 
            this.textBoxClientPropertyType.Location = new System.Drawing.Point(123, 28);
            this.textBoxClientPropertyType.Name = "textBoxClientPropertyType";
            this.textBoxClientPropertyType.Size = new System.Drawing.Size(184, 20);
            this.textBoxClientPropertyType.TabIndex = 6;
            // 
            // textBoxClientAdress
            // 
            this.textBoxClientAdress.Location = new System.Drawing.Point(123, 50);
            this.textBoxClientAdress.Name = "textBoxClientAdress";
            this.textBoxClientAdress.Size = new System.Drawing.Size(184, 20);
            this.textBoxClientAdress.TabIndex = 7;
            // 
            // textBoxClientContactPerson
            // 
            this.textBoxClientContactPerson.Location = new System.Drawing.Point(123, 94);
            this.textBoxClientContactPerson.Name = "textBoxClientContactPerson";
            this.textBoxClientContactPerson.Size = new System.Drawing.Size(184, 20);
            this.textBoxClientContactPerson.TabIndex = 9;
            // 
            // buttonClientSave
            // 
            this.buttonClientSave.Location = new System.Drawing.Point(92, 132);
            this.buttonClientSave.Name = "buttonClientSave";
            this.buttonClientSave.Size = new System.Drawing.Size(141, 23);
            this.buttonClientSave.TabIndex = 10;
            this.buttonClientSave.Text = "Сохранить";
            this.buttonClientSave.UseVisualStyleBackColor = true;
            this.buttonClientSave.Click += new System.EventHandler(this.buttonClientSave_Click);
            // 
            // maskedTextBoxPhone
            // 
            this.maskedTextBoxPhone.Location = new System.Drawing.Point(123, 72);
            this.maskedTextBoxPhone.Mask = "+7 (000) 000-00-00";
            this.maskedTextBoxPhone.Name = "maskedTextBoxPhone";
            this.maskedTextBoxPhone.Size = new System.Drawing.Size(184, 20);
            this.maskedTextBoxPhone.TabIndex = 11;
            // 
            // ClientForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(327, 177);
            this.Controls.Add(this.maskedTextBoxPhone);
            this.Controls.Add(this.buttonClientSave);
            this.Controls.Add(this.textBoxClientContactPerson);
            this.Controls.Add(this.textBoxClientAdress);
            this.Controls.Add(this.textBoxClientPropertyType);
            this.Controls.Add(this.textBoxClientName);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label);
            this.Name = "ClientForm";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Client";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox textBoxClientName;
        private System.Windows.Forms.TextBox textBoxClientPropertyType;
        private System.Windows.Forms.TextBox textBoxClientAdress;
        private System.Windows.Forms.TextBox textBoxClientContactPerson;
        private System.Windows.Forms.Button buttonClientSave;
        private System.Windows.Forms.MaskedTextBox maskedTextBoxPhone;
    }
}