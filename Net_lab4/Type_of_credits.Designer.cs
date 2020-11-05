namespace Net_lab4
{
    partial class Type_of_credits_form
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
            this.labelTypeOfCreditsName = new System.Windows.Forms.Label();
            this.textBoxTypeOfCreditsName = new System.Windows.Forms.TextBox();
            this.labelTypeOfCreditsTerms = new System.Windows.Forms.Label();
            this.labelTypeOfCreditsRate = new System.Windows.Forms.Label();
            this.labelDate = new System.Windows.Forms.Label();
            this.textBoxTypeOfCreditTerms = new System.Windows.Forms.TextBox();
            this.textBoxTypeOfCreditsRate = new System.Windows.Forms.TextBox();
            this.dateTimePickerTypeOfCreditsDate = new System.Windows.Forms.DateTimePicker();
            this.buttonTypeOfCreditsSave = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // labelTypeOfCreditsName
            // 
            this.labelTypeOfCreditsName.AutoSize = true;
            this.labelTypeOfCreditsName.Location = new System.Drawing.Point(12, 21);
            this.labelTypeOfCreditsName.Name = "labelTypeOfCreditsName";
            this.labelTypeOfCreditsName.Size = new System.Drawing.Size(57, 13);
            this.labelTypeOfCreditsName.TabIndex = 0;
            this.labelTypeOfCreditsName.Text = "Название";
            // 
            // textBoxTypeOfCreditsName
            // 
            this.textBoxTypeOfCreditsName.Location = new System.Drawing.Point(136, 18);
            this.textBoxTypeOfCreditsName.Name = "textBoxTypeOfCreditsName";
            this.textBoxTypeOfCreditsName.Size = new System.Drawing.Size(200, 20);
            this.textBoxTypeOfCreditsName.TabIndex = 1;
            // 
            // labelTypeOfCreditsTerms
            // 
            this.labelTypeOfCreditsTerms.AutoSize = true;
            this.labelTypeOfCreditsTerms.Location = new System.Drawing.Point(12, 44);
            this.labelTypeOfCreditsTerms.Name = "labelTypeOfCreditsTerms";
            this.labelTypeOfCreditsTerms.Size = new System.Drawing.Size(118, 13);
            this.labelTypeOfCreditsTerms.TabIndex = 2;
            this.labelTypeOfCreditsTerms.Text = "Услования получения";
            // 
            // labelTypeOfCreditsRate
            // 
            this.labelTypeOfCreditsRate.AutoSize = true;
            this.labelTypeOfCreditsRate.Location = new System.Drawing.Point(12, 170);
            this.labelTypeOfCreditsRate.Name = "labelTypeOfCreditsRate";
            this.labelTypeOfCreditsRate.Size = new System.Drawing.Size(106, 13);
            this.labelTypeOfCreditsRate.TabIndex = 3;
            this.labelTypeOfCreditsRate.Text = "Процентная ставка";
            // 
            // labelDate
            // 
            this.labelDate.AutoSize = true;
            this.labelDate.Location = new System.Drawing.Point(12, 199);
            this.labelDate.Name = "labelDate";
            this.labelDate.Size = new System.Drawing.Size(32, 13);
            this.labelDate.TabIndex = 4;
            this.labelDate.Text = "Срок";
            // 
            // textBoxTypeOfCreditTerms
            // 
            this.textBoxTypeOfCreditTerms.Location = new System.Drawing.Point(136, 44);
            this.textBoxTypeOfCreditTerms.Multiline = true;
            this.textBoxTypeOfCreditTerms.Name = "textBoxTypeOfCreditTerms";
            this.textBoxTypeOfCreditTerms.Size = new System.Drawing.Size(200, 117);
            this.textBoxTypeOfCreditTerms.TabIndex = 5;
            // 
            // textBoxTypeOfCreditsRate
            // 
            this.textBoxTypeOfCreditsRate.Location = new System.Drawing.Point(136, 167);
            this.textBoxTypeOfCreditsRate.Name = "textBoxTypeOfCreditsRate";
            this.textBoxTypeOfCreditsRate.Size = new System.Drawing.Size(200, 20);
            this.textBoxTypeOfCreditsRate.TabIndex = 6;
            this.textBoxTypeOfCreditsRate.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.textBoxTypeOfCreditsRate_KeyPress);
            // 
            // dateTimePickerTypeOfCreditsDate
            // 
            this.dateTimePickerTypeOfCreditsDate.Location = new System.Drawing.Point(136, 193);
            this.dateTimePickerTypeOfCreditsDate.Name = "dateTimePickerTypeOfCreditsDate";
            this.dateTimePickerTypeOfCreditsDate.Size = new System.Drawing.Size(200, 20);
            this.dateTimePickerTypeOfCreditsDate.TabIndex = 8;
            // 
            // buttonTypeOfCreditsSave
            // 
            this.buttonTypeOfCreditsSave.Location = new System.Drawing.Point(105, 234);
            this.buttonTypeOfCreditsSave.Name = "buttonTypeOfCreditsSave";
            this.buttonTypeOfCreditsSave.Size = new System.Drawing.Size(154, 38);
            this.buttonTypeOfCreditsSave.TabIndex = 9;
            this.buttonTypeOfCreditsSave.Text = "Сохранить";
            this.buttonTypeOfCreditsSave.UseVisualStyleBackColor = true;
            this.buttonTypeOfCreditsSave.Click += new System.EventHandler(this.buttonTypeOfCreditsSave_Click);
            // 
            // Type_of_credits_form
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(356, 284);
            this.Controls.Add(this.buttonTypeOfCreditsSave);
            this.Controls.Add(this.dateTimePickerTypeOfCreditsDate);
            this.Controls.Add(this.textBoxTypeOfCreditsRate);
            this.Controls.Add(this.textBoxTypeOfCreditTerms);
            this.Controls.Add(this.labelDate);
            this.Controls.Add(this.labelTypeOfCreditsRate);
            this.Controls.Add(this.labelTypeOfCreditsTerms);
            this.Controls.Add(this.textBoxTypeOfCreditsName);
            this.Controls.Add(this.labelTypeOfCreditsName);
            this.Name = "Type_of_credits_form";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Type_of_credits";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label labelTypeOfCreditsName;
        private System.Windows.Forms.TextBox textBoxTypeOfCreditsName;
        private System.Windows.Forms.Label labelTypeOfCreditsTerms;
        private System.Windows.Forms.Label labelTypeOfCreditsRate;
        private System.Windows.Forms.Label labelDate;
        private System.Windows.Forms.TextBox textBoxTypeOfCreditTerms;
        private System.Windows.Forms.TextBox textBoxTypeOfCreditsRate;
        private System.Windows.Forms.DateTimePicker dateTimePickerTypeOfCreditsDate;
        private System.Windows.Forms.Button buttonTypeOfCreditsSave;
    }
}