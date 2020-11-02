namespace Net_lab4
{
    partial class Form1
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
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.TypeOfCreditsToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.AddTypeOfCreditToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.EditTypeOfCreditToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.ClientToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.AddClientToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.EditClientToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.TypeOfCreditsToolStripMenuItem,
            this.ClientToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(383, 24);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // TypeOfCreditsToolStripMenuItem
            // 
            this.TypeOfCreditsToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.AddTypeOfCreditToolStripMenuItem,
            this.EditTypeOfCreditToolStripMenuItem});
            this.TypeOfCreditsToolStripMenuItem.Name = "TypeOfCreditsToolStripMenuItem";
            this.TypeOfCreditsToolStripMenuItem.Size = new System.Drawing.Size(101, 20);
            this.TypeOfCreditsToolStripMenuItem.Text = "Типы кредитов";
            // 
            // AddTypeOfCreditToolStripMenuItem
            // 
            this.AddTypeOfCreditToolStripMenuItem.Name = "AddTypeOfCreditToolStripMenuItem";
            this.AddTypeOfCreditToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.AddTypeOfCreditToolStripMenuItem.Text = "Добавить";
            this.AddTypeOfCreditToolStripMenuItem.Click += new System.EventHandler(this.AddTypeOfCreditToolStripMenuItem_Click);
            // 
            // EditTypeOfCreditToolStripMenuItem
            // 
            this.EditTypeOfCreditToolStripMenuItem.Name = "EditTypeOfCreditToolStripMenuItem";
            this.EditTypeOfCreditToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
            this.EditTypeOfCreditToolStripMenuItem.Text = "Редактировать";
            this.EditTypeOfCreditToolStripMenuItem.Click += new System.EventHandler(this.EditTypeOfCreditToolStripMenuItem_Click);
            // 
            // ClientToolStripMenuItem
            // 
            this.ClientToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.AddClientToolStripMenuItem1,
            this.EditClientToolStripMenuItem1});
            this.ClientToolStripMenuItem.Name = "ClientToolStripMenuItem";
            this.ClientToolStripMenuItem.Size = new System.Drawing.Size(58, 20);
            this.ClientToolStripMenuItem.Text = "Клиент";
            // 
            // AddClientToolStripMenuItem1
            // 
            this.AddClientToolStripMenuItem1.Name = "AddClientToolStripMenuItem1";
            this.AddClientToolStripMenuItem1.Size = new System.Drawing.Size(180, 22);
            this.AddClientToolStripMenuItem1.Text = "Добавить";
            this.AddClientToolStripMenuItem1.Click += new System.EventHandler(this.AddClientToolStripMenuItem1_Click);
            // 
            // EditClientToolStripMenuItem1
            // 
            this.EditClientToolStripMenuItem1.Name = "EditClientToolStripMenuItem1";
            this.EditClientToolStripMenuItem1.Size = new System.Drawing.Size(180, 22);
            this.EditClientToolStripMenuItem1.Text = "Редактировать";
            this.EditClientToolStripMenuItem1.Click += new System.EventHandler(this.EditClientToolStripMenuItem1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(383, 162);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Menu";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem TypeOfCreditsToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem AddTypeOfCreditToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem EditTypeOfCreditToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem ClientToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem AddClientToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem EditClientToolStripMenuItem1;
    }
}

