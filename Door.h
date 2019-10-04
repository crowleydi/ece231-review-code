

class Door
{
	private:

	bool _isOpen;
	bool _isLocked;

	public:

	// default constructor
	Door()
	{
		_isOpen = false;
		_isLocked = false;
	}

	~Door()
	{
		// nothing to do
	}

	void closeDoor()
	{
		_isOpen = false;
	}

	void openDoor()
	{
		if (_isLocked)
			throw door_locked_exception();
		_isOpen = true;
	}

	void lockDoor()
	{
		if (_isOpen)
			throw door_open_exception();
		_isLocked = true;
	}

	void unLockDoor()
	{
		_isLocked = false;
	}

	bool isOpen()
	{
		return _isOpen;
	}

	bool isLocked()
	{
		return _isLocked;
	}
};
