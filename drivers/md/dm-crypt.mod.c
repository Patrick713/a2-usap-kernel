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
	{ 0x52cb560, "dm_unregister_target" },
	{ 0x6d17d0e8, "dm_register_target" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xdd34010a, "kthread_create_on_node" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x95c6b89, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9deeaf5f, "bioset_init" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x4bf1b7df, "__percpu_counter_init" },
	{ 0xfdf637af, "dm_table_device_name" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x7dbc831f, "crypto_alloc_ahash" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9f984513, "strrchr" },
	{ 0x1b02aeb, "crypto_alloc_skcipher" },
	{ 0x4d4ce517, "crypto_alloc_aead" },
	{ 0xc047ccf3, "dm_accept_partial_bio" },
	{ 0xe7446dc3, "crypto_req_done" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x1966bade, "empty_zero_page" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x14ae8f7c, "bio_add_page" },
	{ 0x6bb665e0, "bio_alloc_bioset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0xdfd3ce3b, "crypto_skcipher_decrypt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb561ac5b, "wait_for_completion" },
	{ 0xa36ae624, "crypto_skcipher_encrypt" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0x7493254d, "crypto_shash_final" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x19ae5859, "crypto_alloc_shash" },
	{ 0x32a423a6, "bio_devname" },
	{ 0xe6c12171, "complete" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xb35d51ab, "wake_up_process" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x693f465b, "crypto_shash_update" },
	{ 0x40fd1bb5, "__alloc_pages_nodemask" },
	{ 0x11a38228, "__percpu_counter_compare" },
	{ 0xf828b0ef, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xda2a4834, "__free_pages" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0xc9b8af52, "dm_put_device" },
	{ 0x81ba3b86, "percpu_counter_destroy" },
	{ 0x77c58230, "__percpu_counter_sum" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x1b886e9c, "bioset_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7bfbe88e, "kthread_stop" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0xe3e6db69, "bio_put" },
	{ 0x3e3928a, "generic_make_request" },
	{ 0x73c4f730, "bio_clone_fast" },
	{ 0xe034cf65, "bio_endio" },
	{ 0x37a0cba, "kfree" },
	{ 0x794765d1, "mempool_free" },
	{ 0x48a9c5d0, "dm_per_bio_data" },
	{ 0xb815eeea, "bio_associate_blkg" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x1e8094d9, "key_put" },
	{ 0xa7b3181c, "up_read" },
	{ 0xfb1d7438, "down_read" },
	{ 0x1500a68e, "request_key_tag" },
	{ 0xcbcc3c0f, "key_type_logon" },
	{ 0xb8563a87, "key_type_user" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x84b183ae, "strncmp" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6f83fba8, "hex2bin" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9d669763, "memcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x349cba85, "strchr" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "3625F8ED916B6F4E8405784");
