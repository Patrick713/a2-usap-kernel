cmd_net/sched/act_gact.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/act_gact.ko net/sched/act_gact.o net/sched/act_gact.mod.o;  true
