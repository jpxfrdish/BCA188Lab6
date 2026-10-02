
Breakout: HW-095
Driver IC: L298N
Type: Dual H-Bridge motor driver


Observed Behavior
When the button was released, the motor remained stopped because both IN1 and IN2 were set to LOW. When the button was pressed and held, IN1 became HIGH while IN2 remained LOW, causing the motor to rotate in one direction. When the button was released, both inputs returned to LOW, allowing the motor to coast and gradually stop. Pressing and holding the button again made the motor rotate again. Overall, the motor responded correctly to the button, running only while the button was pressed and coasting when it was released.


<img width="959" height="539" alt="Screenshot 2026-10-02 141814" src="https://github.com/user-attachments/assets/a039f092-f606-4864-b546-3a06d3cfc9ac" />
<img width="2048" height="1536" alt="1a565c30-f588-4fb9-954b-25bf2cc014ff" src="https://github.com/user-attachments/assets/5191d7ad-326d-4ac8-bea6-64be36fd648b" />
<img width="1536" height="2048" alt="b7d5d218-7cd6-48fa-86b4-7ba49affacfd" src="https://github.com/user-attachments/assets/67b14eef-86a5-4390-bf4c-da6a78365566" />
<img width="959" height="539" alt="Screenshot 2026-10-02 141808" src="https://github.com/user-attachments/assets/b36cfe48-e47a-4bd8-8370-291fe1128ca2" />
