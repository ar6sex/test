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
            dataGridView1.Columns.Add("Type", "Тип птиці");
            dataGridView1.Columns.Add("Breed", "Порода");
            dataGridView1.Columns.Add("Color", "Колір");
            dataGridView1.Columns.Add("BirthDate", "Дата народ.");
            dataGridView1.Columns.Add("Eggs", "Несучість");
            dataGridView1.Columns.Add("Weight", "Вага");
            dataGridView1.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;

            dataGridView2.Columns.Clear();
            dataGridView2.Columns.Add("Type", "Тип птиці");
            dataGridView2.Columns.Add("Breed", "Порода");
            dataGridView2.Columns.Add("Color", "Колір");
            dataGridView2.Columns.Add("BirthDate", "Дата народ.");
            dataGridView2.Columns.Add("Eggs", "Несучість");
            dataGridView2.Columns.Add("Weight", "Вага");
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
