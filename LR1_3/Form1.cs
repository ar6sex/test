namespace LR1_3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            dataGridView1.Columns.Clear();
            dataGridView1.Columns.Add("Type", "��� �����");
            dataGridView1.Columns.Add("Breed", "������");
            dataGridView1.Columns.Add("Color", "����");
            dataGridView1.Columns.Add("BirthDate", "���� �����.");
            dataGridView1.Columns.Add("Eggs", "���������");
            dataGridView1.Columns.Add("Weight", "����");
            dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;

            dataGridView2.Columns.Clear();
            dataGridView2.Columns.Add("Type", "��� �����");
            dataGridView2.Columns.Add("Breed", "������");
            dataGridView2.Columns.Add("Color", "����");
            dataGridView2.Columns.Add("BirthDate", "���� �����.");
            dataGridView2.Columns.Add("Eggs", "���������");
            dataGridView2.Columns.Add("Weight", "����");
            dataGridView2.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void dataGridView2_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
