using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowForms
{
    public partial class MDIForm : Form
    {
        public MDIForm()
        {
            InitializeComponent();
        }

        private void OnClick(object sender, EventArgs e)
        {
            Form1 newMDIChild = new Form1();
            newMDIChild.MdiParent = this;
            newMDIChild.Show();
        }

        private void SaveClick(object sender, EventArgs e)
        {
            Form activeChild = new Form();
            activeChild = this.ActiveMdiChild;
            activeChild.ActiveControl = activeChild.ActiveControl as Form1;
            if (activeChild != null)
            {
                if(activeChild.GetType() == typeof(Form1))
                {
                    try
                    {
                        Form1 window = activeChild as Form1;
                        window.NewClick();
                    }

                    catch
                    {
                        MessageBox.Show("Error");
                    }
                }
            }
        }
    }
}
