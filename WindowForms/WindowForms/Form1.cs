using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowForms
{  
    public partial class Form1 : Form
    {
        public class Vector
        {
            public string cord;
            public Vector(string v)
            {
                cord = v;
            }
        }

        public List<Vector> quard = new List<Vector>();

        public Form1()
        {
            InitializeComponent();
        }

        public void textOutput_TextChanged(object sender, EventArgs e)
        {
            if (e.GetType() == typeof(MouseEventArgs))
            {
                MouseEventArgs me = e as MouseEventArgs;
                Vector temp = new Vector(me.Location.ToString());
                quard.Add(temp);
                textOutput.Text += me.Location.ToString() + ", ";
            }
        }

        public void NewClick()
        {
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();

            saveFileDialog1.Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
            saveFileDialog1.FilterIndex = 2;
            saveFileDialog1.RestoreDirectory = true;

            if(saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                File.WriteAllText(saveFileDialog1.FileName, quard[0].cord);
                for(int i = 1; i < quard.Count; i++)
                    File.AppendAllText(saveFileDialog1.FileName, quard[i].cord);
            }
        }

        private void clear_buttom(object sender, EventArgs e)
        {
            if (e.GetType() == typeof(MouseEventArgs))
            {
                MouseEventArgs me = e as MouseEventArgs;
                textOutput.Text = "";
            }
        }

        private void bop_Click(object sender, EventArgs e)
        {

        }
    }
}
