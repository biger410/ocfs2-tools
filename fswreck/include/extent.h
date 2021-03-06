/*
 * extent.h
 *
 * Function prototypes, macros, etc. for related 'C' files
 *
 * Copyright (C) 2006 Oracle.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 021110-1307, USA.
 *
 */

#ifndef __EXTENT_H
#define __EXTENT_H

void mess_up_extent_list(ocfs2_filesys *fs, enum fsck_type type,
			 uint64_t blkno);
void mess_up_extent_block(ocfs2_filesys *fs, enum fsck_type type,
			  uint64_t blkno);
void mess_up_extent_record(ocfs2_filesys *fs, enum fsck_type type,
			   uint64_t blkno);

void create_file(ocfs2_filesys *fs, uint64_t blkno, uint64_t *retblkno);

#endif		/* __EXTENT_H */
