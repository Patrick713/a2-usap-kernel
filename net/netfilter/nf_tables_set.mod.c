#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6309e811, "rhashtable_walk_exit" },
	{ 0x5261322c, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x27b05872, "rhashtable_walk_next" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd81584b7, "nft_register_set" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb6529965, "rhashtable_insert_slow" },
	{ 0xa68613dd, "get_jiffies_64" },
	{ 0xece784c2, "rb_first" },
	{ 0x52dc69ef, "rht_bucket_nested_insert" },
	{ 0xf8a38105, "rhashtable_free_and_destroy" },
	{ 0xe8027e87, "nft_set_gc_batch_alloc" },
	{ 0xb787eee9, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x4eeb6d2, "rhashtable_walk_start_check" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf7d0d4a7, "nft_set_elem_destroy" },
	{ 0xbf63bb61, "nft_set_gc_batch_release" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x41a17314, "rhashtable_walk_enter" },
	{ 0xf7e89417, "nft_unregister_set" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x9405c2d3, "rhashtable_init" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xa038f306, "__rht_bucket_nested" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "4274723976CFC9375D92FC7");
