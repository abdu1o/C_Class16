#pragma once
class Manual
{
private:

    struct data
    {
        string _name;
        string _owner;
        string _phone;
        string _address;
        string _job;
    };
    vector<data> records;

public:

    Manual(string path)
    {
        ifstream file(path);

        if (file.is_open()) 
        {

            while (!file.eof()) 
            {
                data data;
                getline(file, data._name);
                getline(file, data._owner);
                getline(file, data._phone);
                getline(file, data._address);
                getline(file, data._job);

                if (!data._name.empty())
                {
                    records.push_back(data);
                }
                    
            }
            file.close();
        }
        else
        {
            throw exception("File is not open");
        }
    }

    void Save(string path)
    {
        ofstream file(path);
        for (data record : records) 
        {
            file << record._name << endl;
            file << record._owner << endl;
            file << record._phone << endl;
            file << record._address << endl;
            file << record._job << endl;
        }
        file.close();
    }

    void Add(string name, string owner, string phone, string address, string job) 
    {
        records.push_back({ name, owner, phone, address, job });
    }

    void SearchByName(string name)
    {
        for (data contact : records)
        {
            if (contact._name == name)
            {
                cout << "Name: " << contact._name << endl;
                cout << "Owner: " << contact._owner << endl;
                cout << "Phone: " << contact._phone << endl;
                cout << "Address: " << contact._address << endl;
                cout << "Job: " << contact._job << endl;
            }
        }
    }

    void SearchByOwner(string owner)
    {
        for (data contact : records)
        {
            if (contact._owner == owner)
            {
                cout << "Name: " << contact._name << endl;
                cout << "Owner: " << contact._owner << endl;
                cout << "Phone: " << contact._phone << endl;
                cout << "Address: " << contact._address << endl;
                cout << "Job: " << contact._job << endl;
            }
        }
    }

    void SearchByPhone(string phone)
    {
        for (data contact : records)
        {
            if (contact._phone == phone)
            {
                cout << "Name: " << contact._name << endl;
                cout << "Owner: " << contact._owner << endl;
                cout << "Phone: " << contact._phone << endl;
                cout << "Address: " << contact._address << endl;
                cout << "Job: " << contact._job << endl;
            }
        }
    }

    void PrintAll() 
    {
        for (data contact : records) 
        {
            cout << "Name: " << contact._name << endl;
            cout << "Owner: " << contact._owner << endl;
            cout << "Phone: " << contact._phone << endl;
            cout << "Address: " << contact._address << endl;
            cout << "Activity: " << contact._job << endl;
        }
    }
};


